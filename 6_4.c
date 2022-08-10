/*
4.Write a program which accept number from user and return multiplication of all 
digits.
Input : 2395 
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864
*/
#include<stdio.h>
int display(int);
int main()
{
    int ivalue=0,iret=0;
    printf("Enter the number : ");
    scanf("%d",&ivalue);
    iret=display(ivalue);
    printf("Multiplication of digits in the Number are %d",iret);
    return 0;
}
int display(int ino)
{
    int idigit=0,mult=1;

    if(ino<0)
    {
        ino=-ino;
    }

    while(ino>0)
    {
        idigit=ino%10;
        if(idigit==0)
        {
            idigit=1;
        }
        mult*=idigit;
        ino=ino/10;
    }
    return mult;

}

//Time Complexity=o(n)