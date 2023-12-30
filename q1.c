// Designing Calculator using Switch Case Operator

#include <stdio.h>

int main()
{
    char ch;
    int a, b;
    printf("Enter Any Two Numbers...\n");

    printf("Enter The Operator: ");
    scanf("%c", &ch);
    
    printf("Enter The First Number: ");
    scanf("%d", &a);
    
    printf("Enter The Second Number: ");
    scanf("%d", &b);

    
    switch (ch)
    {
    
    case '+':
        printf("SUM: %d", a + b);
        break;
    case '-':
        printf("Substraction: %d", a - b);
        break;
    case '*':
        printf("Multiplication: %d", a * b);
        break;
    case '/':
        printf("Division: %d", a / b);
        break;

    default:
        printf("Enter A Valid Operator");
        break;

    }
    return 0;
}
