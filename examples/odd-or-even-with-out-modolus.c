#include<stdio.h>

int main()
{
    int num, x, y, z;

    num = 9;

    x = num/2;

    y = x*2;

    z = num-y;

    if (z == 0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
    return 0;
}
