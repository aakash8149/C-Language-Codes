//Leap Year Finding Tool

#include<stdio.h>

int main()
{
    int Year;
    printf("Enter Your Desired Year: ");
    scanf("%d",&Year);

    if(((Year%4 == 0) && (Year%100 != 0)) || (Year%400 == 0))
    {
        printf("LEAP YEAR...");
    }
    else
    {
        printf("NOT A LEAP YEAR!!!");
    }
    return 0;
}