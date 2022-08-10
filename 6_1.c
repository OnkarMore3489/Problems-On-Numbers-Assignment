/*
1.Write a program which accept number from user and return the count of even 
digits.
Input : 2395 
Output : 1
Input : 1018
Output : 2
Input : -1018
Output : 2
Input : 8462
Output : 4
*/
#include<stdio.h>
int display(int);
int main()
{
    int ivalue=0,iret=0;
    printf("Enter the number : ");
    scanf("%d",&ivalue);
    iret=display(ivalue);
    printf("Even digits in the Number are %d",iret);
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
        if(idigit%2==0)
        {
            count++;
        }
        ino=ino/10;
    }
    return count;

}

//Time Complexity=o(n)