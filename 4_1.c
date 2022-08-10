/*
1.Write a program which accept number from user and display its multiplication of 
factors.
Input : 12
Output : 144 (1 * 2 * 3 * 4 * 6)
Input : 13
Output : 1 (1)
Input : 10
Output : 10 (1 * 2 * 5)
*/
#include<stdio.h>
void display(int num)
{
    int mult=1;
    for(int i=1;i<=num/2;i++)       //i<num;
    {
        if((num%i)==0)
        {
            printf("%d ",i);
            mult*=i;
        }
    }
    printf("\n");
    printf("multiplication of factors is: %d\n",mult);

}
int main()
{
    int value=0;
    printf("Enter the value : ");
    scanf("%d",&value);
    display(value);
    return 0;
}