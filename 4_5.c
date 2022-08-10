/*
5.Write a program which accept number from user and return difference between 
summation of all its factors and non factors.
 
Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37)
*/
#include<stdio.h>
void display(int num)
{
    int sumfact=0,sumnonfact=0;
    for(int i=1;i<num;i++)
    {
        if((num%i)==0)
        {
           // printf("%d ",i);
            sumfact+=i;
        }
        else{
         sumnonfact+=i;
        }
    }
    printf("%d",(sumfact-sumnonfact));
}
int main()
{
    int value=0;
    printf("Enter number : ");
    scanf("%d",&value);
    display(value);
    return 0;
}