/*
5.Write a program which accept number from user and return difference between 
summation of even digits and summation of odd digits.
Input : 2395 
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)
*/
#include<stdio.h>
int display(int);
int main()
{
    int ivalue=0,iret=0;
    printf("Enter the number : ");
    scanf("%d",&ivalue);
    iret=display(ivalue);
    printf("Difference between summetion of even number and summetion of odd numbers are %d",iret);
    return 0;
}
int display(int ino)
{
    int idigit=0,mult=1;
    int sum_even=0,sum_odd=0;
    if(ino<0)
    {
        ino=-ino;
    }

    while(ino>0)
    {
        idigit=ino%10;
        if(idigit%2==0)
        {
            sum_even+=idigit;
        }
        else if((idigit%2)!=0)
        {
            sum_odd+=idigit;
        }
        ino=ino/10;
    }

    return (sum_even-sum_odd);

}

//Time Complexity=o(n)