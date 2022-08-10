/*
2. Write a program which accept width & height of rectangle from user and calculate 
its area. (Area = Width * Height)
Input : 5.3 9.78
Output : 51.834
*/
#include<stdio.h>
double Area_rectangle(float width,float height)
{
    double Area=0.0;
    Area=width*height;
    return Area;
}
int main()
{
    float iValue1=0.0,iValue2=0.0;
    double dRet=0.0;
    printf("Enter the width of rectangle : ");
    scanf("%f",&iValue1);
    printf("Enter the height of rectangle : ");
    scanf("%f",&iValue2);
    dRet=Area_rectangle(iValue1,iValue2);
    printf("Area of Rectangle is : %.3f",dRet);
    return 0;
}