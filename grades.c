#include<stdio.h>

int main()
{
    int marks;
    printf("Enter Marks Obtained: ");
    scanf("%d",&marks);

    if(marks>=95 && marks<=100)
    {
        printf("Outstanding");
    }
    else if(marks>=85 && marks<=94)
    {
        printf("Excellent Performance");
    }
    else if(marks>=65 && marks<=84)
    {
        printf("Good Performance");
    }
    else if(marks>=45 && marks<=64)
    {
        printf("Poor Performance");
    }
    else if(marks <=44)
    {
        printf("Fail!!!");
    }
    return 0;
}