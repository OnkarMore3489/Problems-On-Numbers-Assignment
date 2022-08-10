/*
4. Accept one character from user and convert case of that character. 
Input : a Output : A 
Input : D Output : d
*/
#include<stdio.h>
#include<ctype.h>
void convert(char ch)
{
    if(ch>='a' && ch<='z')
    {
     printf("%c",toupper(ch));
    }
     else if(ch>='A' && ch<='Z')
    {
     printf("%c",tolower(ch));
    }
}
int main()
{
    char ch='\0';
    printf("Enter Character : ");
    scanf("%c",&ch);
    convert(ch);
    return 0;
}