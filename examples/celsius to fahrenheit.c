#include<stdio.h>

int main()
{
    int c, f;

    printf(" Welcome, This is a Celsius to Fahrenheit calculator.\n Please input a Celsius value:");
    scanf("%d", &c);

    f= ( c * 9/5 ) + 32;

    printf(" Fahrenheit value is : %d \n", f);

    return 0;
}
