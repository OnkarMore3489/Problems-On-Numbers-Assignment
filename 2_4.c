/*
4. Accept two numbers from user and display first number in second 
number of times. 
Input : 12 5 
Output : 12 12 12 12 12 
Piyush Khairnar - 7588945488 आ"ी Technical सं&ार करतो !!! ©Marvellous Infosystems Page 2
Marvellous Logic Building Assignment : 2 
Input : -2 3 
Output : -2 -2 -2 
Input : 21 -3 
Output : 21 21 21 
Input : -2 0 
Output : 
*/
#include<stdio.h>
void display(int a,int b)
{
    for(int i=0;i<b;i++)
    {
        printf("%d ",a);
    }
}
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    display(a,b);
    return 0;
}