/*
5.Write a program which accept number from user and count frequency of such a 
digits which are less than 6.

Input : 2395 
Output : 3
Input : 1018
Output : 3
Input : 9440
Output : 3
Input : 96672
Output : 1
*/
#include<stdio.h>
int display(int);
int main()
{
    int ivalue=0;
    int iret=0;
    printf("Enter the Number : ");
    scanf("%d",&ivalue);
    iret=display(ivalue);
    printf("value less than 6 in the number are %d \n",iret);

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
        printf("%d\n",idigit);

        if(idigit<6)
        {
         count++;
        }
         ino=ino/10;
    }
    return count;

}