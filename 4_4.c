/*
4.Write a program which accept number from user and return summation of all its 
non factors.
Input : 12
Output : 50
Input : 10
Output : 37
*/

#include<stdio.h>
void display(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if((num%i)!=0)
        {
            printf("%d ",i);
            sum+=i;
        }
    }
    printf("\n");
    printf("sum is: %d",sum);
}
int main()
{
    int value=0;
    printf("Enter number : ");
    scanf("%d",&value);
    display(value);
    return 0;
}