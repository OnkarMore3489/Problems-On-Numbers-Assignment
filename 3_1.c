/*
1.Write a program which accept one number from user and print that number of 
even numbers on screen. 
Input : 7 
Output: 2 4 6 8 10 12 14
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
     for(int i=1;i<=2*value;i++)
     {
        if((i%2)==0)
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