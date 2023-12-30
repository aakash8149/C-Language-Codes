#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter the Number: ");
    scanf("%d%d%d", &a, &b, &c);

    int avg = (a + b + c) / 3;

    printf("%d\n", avg);

    return 0;
}