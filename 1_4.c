/*
4. Accept one number and check whether is is divisible by 5 or not. 
#include<stdio.h> 
typedef int BOOL; 
#define TRUE 1 
#define FALSE ____ 
______ Check( _____ iNo) 
{ 
 if(( _____ % 5) == 0) 
 { 
 return TRUE; 
 } 
 else 
 { 
 return ______ ; 
 } 
} 
int main() 
{ 
 int iValue = 0; 
 BOOL bRet = FALSE; 
 printf(“Enter number”); 
 scanf(“____” ,&____); 
 bRet = Check(iValue); 
 if(bRet == TRUE) 
 { 
 printf(“Divisible by 5”); 
 } 
 else 
 { 
 printf(“Not Divisible by 5”); 
 } 
 return 0; 
}
*/

#include<stdio.h> 
typedef int BOOL; 
#define TRUE 1 
#define FALSE 0 
int Check(int iNo) 
{
if((iNo % 5) == 0) 
{ 
 return TRUE; 
 } 
else 
 { 
 return FALSE; 
 }
}  
int main() 
{ 
 int ivalue = 0; 
 BOOL bRet = FALSE; 
 printf("Enter number"); 
 scanf("%d",&ivalue); 
 bRet = Check(ivalue); 
 if(bRet == TRUE) 
{ 
 printf("Divisible by 5"); 
} 
else 
 { 
 printf("Not Divisible by 5"); 
}
 return 0; 
} 
