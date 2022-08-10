/*
2.Write a program which accept number from user and display its factors in 
decreasing order.
Input : 12
Output : 6 4 3 2 1
Input : 13
Output : 1
Input : 10
Output : 5 2 1
*/
#include<stdio.h>
void display(int num)
{
    for(int i=num/2;i>=1;i--)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int value=0;
    printf("Enter number : ");
    scanf("%d",&value);
    display(value);
    return 0;
}