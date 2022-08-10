/*
3.Write a program which accept number from user and display all its non factors.
Input : 12
Output : 5 7 8 9 10 11
Input : 13
Output : 2 3 4 5 6 7 8 9 10 11 12
Input : 10
Output : 3 4 6 7 8 
*/
#include<stdio.h>
void display(int num)
{
    for(int i=1;i<num;i++)
    {
        if((num%i)!=0)
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