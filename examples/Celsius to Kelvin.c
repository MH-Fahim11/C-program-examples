#include<stdio.h>

int main()
{
    int c, k;

    printf(" Welcome, This is a Celsius to Kelvin calculator.\n Please input a Celsius value:");
    scanf("%d", &c);

    k = c + 273;

    printf(" Kelvin value is : %d \n", k);

    return 0;
}
