#include<stdio.h>

int main()
{
    int c, k;

    printf(" Welcome, This is a Kelvin to Celsius calculator.\n Please input a Kelvin value:");
    scanf("%d", &k);

    c = k - 273;

    printf(" Celsius value is : %d \n", c);

    return 0;
}

