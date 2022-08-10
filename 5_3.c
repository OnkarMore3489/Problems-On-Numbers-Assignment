/*
3.Write a program which accept number from user and count frequency of 2 in it.
Input : 2395 
Output : 1
Input : 1018
Output : 0
Input : 9000
Output : 0
Input : 922432
Output : 3
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
    printf("2 value in the number %d times\n",iret);

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

        if(idigit==2)
        {
         count++;
        }
         ino=ino/10;
    }
    return count;

}