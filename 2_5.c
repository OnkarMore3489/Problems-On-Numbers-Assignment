/*
5. Accept number from user and check whether number is even or 
odd. 
#include<stdio.h> 
#define TRUE 1 
#define FALSE 0 
Piyush Khairnar - 7588945488 आ"ी Technical सं&ार करतो !!! ©Marvellous Infosystems Page 3
Marvellous Logic Building Assignment : 2 
typedef int BOOL; 
 
BOOL ChkEven(int iNo) 
{ 
 // Logic 
} 
int main() 
{ 
 int iValue = 0; 
 BOOL bRet = FALSE; 
 printf(“Enter number”); 
 scanf(“____” ,&____); 
 bRet = ChkEven(_____); 
 // Display result 
 return 0; 
}
*/
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL check_even(int ino)
{
    if((ino%2)==0)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main()
{
    BOOL num=FALSE;
    printf("Enter your number : ");
    scanf("%d",&num);
    int bRET=check_even(num);
    if(bRET==TRUE)
    {
      printf("Number is even");
    }
    else{
        printf("number is not even");
    }
    return 0;
}