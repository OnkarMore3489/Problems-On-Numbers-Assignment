/*
1.Write a program which accept number from user and display its digits in reverse 
order.
Input : 2395 
Output : 
5
9
3
2
Input : 1018
Output : 
8
1
0
1
Input : -1018
Output : 
8
1
0
1
Input : 9000
Output : 
0
0
0
9
*/

#include<stdio.h>
void display(int);
int main()
{
    int ivalue=0;
    printf("Enter the Number : ");
    scanf("%d",&ivalue);
    display(ivalue);
    return 0;
}
void display(int ino)
{
    int idigit=0;
    
    if(ino<0)
    {
        ino=-ino;
    }
    
    while(ino>0)
    {
        idigit=ino%10;
        printf("%d\n",idigit);
        ino=ino/10;
    }

}