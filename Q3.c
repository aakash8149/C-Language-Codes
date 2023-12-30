#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    printf("Enter 3rd Number: ");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("%d :is Largest..",a);
    }
    else if (b>a && b>c)
    {
        printf("%d :is Largest...",b);
    }
    
    else if (c>a && c>b)
    {
        printf("%d :is Largest...",c);
    }
    return 0;
    
}
