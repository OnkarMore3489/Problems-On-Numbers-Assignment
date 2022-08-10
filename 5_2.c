/*
2.Write a program which accept number from user and check whether it contains 0 
in it or not.
Input : 2395 
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero
*/
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool display(int);
int main()
{
    int ivalue=0;
    bool iret=FALSE;
    printf("Enter the Number : ");
    scanf("%d",&ivalue);
    iret=display(ivalue);
    if(iret==TRUE)
    {
        printf("it contains zero\n");
    }
    else
    {
      printf("it cannot contains zero\n");  
    }

    return 0;
}
bool display(int ino)
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

        if(idigit==0)
        {
            return TRUE;
        }
         ino=ino/10;
    }

}