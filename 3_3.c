/*
3. Write a program which accept number from user and print even factors of that 
number. 
Input : 36
Output: 2 6 12 18
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
     for(int i=2;i<value;i++)
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