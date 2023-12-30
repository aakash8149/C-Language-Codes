// We will design a Calculator Here... Using Switch Function in C Language...

#include<stdio.h>

int main()
{
    int a,b;
    char ch;

    printf("Enter the Operator: ");
    scanf("%c",&ch);
    printf("Enter The Value of Two Numbers...\n");
    printf("Enter the Value of First Number: ");
    scanf("%d",&a);
    printf("Enter the Value of Second Number: ");
    scanf("%d",&b);

    switch(ch)
    {
        case '+':
                printf("The Sum is: %d", a+b);
                break;
        case '-':
                printf("The Difference is: %d", a-b);
                break;
        case '*':
                printf("The Multiplication is: %d", a*b);
                break;
        case '/':
                printf("The Division is: %d", a/b);
                break;
        default:
                printf("Enter a Valid Option....");
    }
    return 0;
}