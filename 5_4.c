/*
4.Write a program which accept number from user and count frequency of 4 in it.
Input : 2395 
Output : 0
Input : 1018
Output : 0
Input : 9440
Output : 2
Input : 922432
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
    printf("4 value in the number %d times\n",iret);

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

        if(idigit==4)
        {
         count++;
        }
         ino=ino/10;
    }
    return count;

}