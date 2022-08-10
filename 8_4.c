/*
4.Write a program which accept range from user and return addition of all even 
numbers in between that range. (Range should contains positive numbers only)
Input : 23 30 
Output : 108
Input : 10 18
Output : 70
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range
*/
#include<stdio.h>
int display_sum(int iStart,int iEnd)
{
    int i=0,iSum=0;
     for(i=iStart;i<=iEnd;i++)
     {
        if((i%2==0))
        {
        iSum+=i;
        }
     }
     return iSum;
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;
    printf("Enter starting point : ");
    scanf("%d",&iValue1);
    printf("Enter Ending point : ");
    scanf("%d",&iValue2);
    if(iValue1<0 || iValue2<0 || iValue2<iValue1)
    {
      printf("Invalid Range\n");
    }
    else
    {
     iRet=display_sum(iValue1,iValue2);
     printf("Addition of numbers between the range %d to %d is : %d",iValue1,iValue2,iRet);
    }
    return 0;
}