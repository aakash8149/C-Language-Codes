#include <stdio.h>

int main()
{
    int random_Number;
    printf("Enter the Number: ");
    scanf("%d", &random_Number);

    if (random_Number % 2 == 0)
    {
        printf("The Number is divisible by 2");
    }
    else
    {
        printf("The Number is not divisible by 2");
    }

    return 0;
}