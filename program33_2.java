/*
2.Write a program which accept number from user and return the 
count of odd digits.
Input : 2395 
Output : 3
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 0
 */
import java.util.Scanner;
class program33_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue=0,iRet=0;

        System.out.println("Enter the Number : ");
        iValue=sobj.nextInt();
        
        Digit dobj = new Digit();
        iRet=dobj.CountOdd(iValue);
        System.out.println("Number of Odd Digits are : "+iRet);
    }
}
class Digit
{
    public int CountOdd(int iNo)
    {
      int idigit=0,iCnt=0;
      while(iNo!=0)
      {
          idigit=iNo%10;
          if((idigit%2)!=0)
          {
            iCnt++;
          }
          iNo=iNo/10;
      }
      return iCnt;
    }
}