/*
4.Write a program which accept number from user and return 
multiplication of all digits.
Input : 2395 
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864
 */
import java.util.Scanner;
class program33_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue=0,iRet=0;

        System.out.println("Enter the Number : ");
        iValue=sobj.nextInt();
        
        Digit dobj = new Digit();
        iRet=dobj.Multiply(iValue);
        System.out.println("Multiplication of all digits is : "+iRet);
    }
}
class Digit
{
    public int Multiply(int iNo)
    {
      int idigit=0,iMult=1;
      while(iNo!=0)
      {
          idigit=iNo%10;
          if(idigit==0)
          {
              idigit=1;
          }
          iMult*=idigit;
          iNo=iNo/10;
      }
      return iMult;
    }
}