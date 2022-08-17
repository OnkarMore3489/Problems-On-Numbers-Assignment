/*
1.Write a java program which accept number from user and return the 
count of even digits.
Input : 2395 
Output : 1
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 4
 */
import java.util.Scanner;
class program33_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue=0,iRet=0;

        System.out.println("Enter the Number : ");
        iValue=sobj.nextInt();
        
        Digit dobj = new Digit();
        iRet=dobj.CountEven(iValue);
        System.out.println("Number of Even Digits are : "+iRet);
    }
}
class Digit
{
    public int CountEven(int iNo)
    {
      int idigit=0,iCnt=0;
      while(iNo!=0)
      {
          idigit=iNo%10;
          if(idigit%2==0)
          {
            iCnt++;
          }
          iNo=iNo/10;
      }
      return iCnt;
    }
}