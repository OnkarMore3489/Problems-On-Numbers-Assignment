/*
3.Write a program which accept number from user and return the 
count of digits in between 3 and 7.
Input : 2395 
Output : 1
Input : 1018
Output : 0
Input : 4521
Output : 2
Input : 9922
Output : 0
 */
import java.util.Scanner;
class program33_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue=0,iRet=0;

        System.out.println("Enter the Number : ");
        iValue=sobj.nextInt();
        
        Digit dobj = new Digit();
        iRet=dobj.CountRange(iValue);
        System.out.println("Digits between 3 and 7 are : "+iRet);
    }
}
class Digit
{
    public int CountRange(int iNo)
    {
      int idigit=0,iCnt=0;
      while(iNo!=0)
      {
          idigit=iNo%10;
          if((idigit>=3 && idigit<=7))
          {
            iCnt++;
          }
          iNo=iNo/10;
      }
      return iCnt;
    }
}