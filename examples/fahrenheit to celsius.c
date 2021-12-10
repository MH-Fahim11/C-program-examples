#include<stdio.h>

int main()
{
    int c, f;

    printf(" Welcome, This is a Fahrenheit to Celsius calculator.\n Please input a Fahrenheit value:");
    scanf("%d", &f);

    c = (f - 32) * 5/9 ;

    printf(" Celsius value is : %d \n", c);

    return 0;
}
