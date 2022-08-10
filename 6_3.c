/*
3.Write a program which accept number from user and return the count of digits in 
between 3 and 7.
Input : 2395 
Output : 1
Input : 1018
Output : 0
Input : 4521
Output : 2
Input : 9922
Output : 0
*/
#include<stdio.h>
int display(int);
int main()
{
    int ivalue=0,iret=0;
    printf("Enter the number : ");
    scanf("%d",&ivalue);
    iret=display(ivalue);
    printf("digits between 3 to 7 in the Number are %d",iret);
    return 0;
}
int display(int ino)
{
    int idigit=0,count=0;

    if(ino<0)
    {
        ino=-ino;
    }

    while(ino>0)
    {
        idigit=ino%10;
        if((idigit>3) && (idigit<7))
        {
          count++;
        }
        ino=ino/10;
    }
    return count;

}

//Time Complexity=o(n)