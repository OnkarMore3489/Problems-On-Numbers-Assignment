/*
2. Write a program which accept number from user and print even factors of that 
number. 
Input : 24
Output: 2 4 6 8 12 
*/
#include<stdio.h>
void display(int value)
{
    if(value<=0)
    {
        return;
    }
    else
    {
     for(int i=1;i<value;i++)
     {
        if((value%i)==0 && i%2==0)
        {
            printf("%d ",i);
        }
     }
    }
}
int main()
{
    int value=0;
    printf("enter the number : ");
    scanf("%d",&value);
    display(value);
    return 0;
}