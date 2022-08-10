/*
1.Write a program which accept radius of circle from user and calculate its area. 
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3 
Output : 88.2026
Input : 10.4 
Output : 339.6224
*/
#include<stdio.h>
#define PI 3.14
double Area_circle(float radius)
{
    float Area=0.0;
    Area=(PI*radius*radius);
    return Area;
}
int main()
{
    float fValue=0.0;
    double fRet=0.0;
    printf("Enter the radius of circle : ");
    scanf("%f",&fValue);
    
    fRet=Area_circle(fValue);
    printf("Area of circle is :%.4f",fRet);
    return 0;
}
