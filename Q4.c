#include<stdio.h>

int main()
{
    int a,b,c;
    a = 10;
    b = 20;
    c = b;
    b = a;
    a = c;

    printf("a: %d\n",a);
    printf("b: %d\n",b); 

    //W/O Using Third Variable 

    int x,y;

    x = 100;
    y = 250;

    y = y + x;
    x = y - x;
    y = y - x;

    printf("Swapped Value of X: %d\n",x);
    printf("Swapped Value of Y: %d",y);

    return 0;

}