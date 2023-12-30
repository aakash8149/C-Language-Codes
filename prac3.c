// Write a C function to swap two numbers (with and without using third variable)
#include<stdio.h>

// Using third Variable 

int main()

{
    int a = 10;
    int b = 20;
    
    int c = b;
    b = a;
    a = c;
    
    printf("a was ini... 10, now: %d\n",a);
    printf("b was ini... 20, now: %d",b);
}

// W/O using third variable...

int main()
{
    int d = 10;
    int e = 20;

    d = d + e;
    e = d - e;
    d = d - e;

    printf("d was ini... 10, now: %d\n",d);
    printf("e was ini... 20, now: %d",e);
}