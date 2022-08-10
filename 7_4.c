/*
4. Write a program which accept temperature in Fahrenheit and convert it into 
celsius. (1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.2222 (10 - 32) * (5/9)
Input : 34
Output : 1.11111 (34 - 32) * (5/9)
*/
#include<stdio.h>
double FhtoCs(float iNo)
{
    double d=0.0;
    d=((iNo-32)*0.5555);
    return d;
}

int main()
{
    float iValue=0.0;
    double dRet=0.0;
    printf("Eneter the temperature in Farenheit: ");
    scanf("%f",&iValue);
    dRet=FhtoCs(iValue);
    printf("convert Farenhaiht to celcius is : %.5f",dRet);
    return 0;
}