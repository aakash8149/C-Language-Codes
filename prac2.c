// Write a program in C to find the largest of three numbers without using array

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter a Number:  ");
    scanf("%d",&a);
    printf("Enter a Number:  ");
    scanf("%d",&b);
    printf("Enter a Number:  ");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("This number is the greatest: %d",a);
    }
    else if(b>a && b>c)
    {
        printf("This Number is the greatest: %d",b);
    }
    else if (c>a && c>b)
    {
        printf("This Number is the greatest: %d",c);
    }
    return 0;
}