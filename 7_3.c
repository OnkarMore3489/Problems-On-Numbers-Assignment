/*
3. Write a program which accept distance in kilometre and convert it into meter. (1 
kilometre = 1000 Meter)
Input : 5
Output : 5000
Input : 12
Output : 12000
*/
#include<stdio.h>
int KM_to_Meter(int iNo)
{
    return iNo*1000;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter distance(KM) : ");
    scanf("%d",&iValue);
    iRet=KM_to_Meter(iValue);
    printf("convert the KM to Meter is : %d",iRet);
    return 0;
}