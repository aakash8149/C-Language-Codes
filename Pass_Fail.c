#include<stdio.h>

int main()
{
    int marks;

    printf("Enter The Marks Gain: ");
    scanf("%d",&marks);

    if(marks>30)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}