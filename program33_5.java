/*
5.Write a program which accept number from user and return 
difference between summation of even digits and summation of odd 
digits.
Input : 2395 
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)
 */
import java.util.Scanner;
class program33_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue=0,iRet=0;

        System.out.println("Enter the Number : ");
        iValue=sobj.nextInt();
        
        Digit dobj = new Digit();
        iRet=dobj.Multiply(iValue);
        System.out.println("Difference between summation of even digit and summation of odd digit is : "+iRet);
    }
}
class Digit
{
    public int Multiply(int iNo)
    {
      int idigit=0,SumEven=0,SumOdd=0;
      while(iNo!=0)
      {
          idigit=iNo%10;
          if(idigit%2==0)
          {
              SumEven+=idigit;
          }
          else
          {
              SumOdd+=idigit;
          }
          
          iNo=iNo/10;
      }
      return SumEven-SumOdd;
    }
}