// Odd even number in c

#include<stdio.h>

int main(){
    int number;
    printf("Enter Your Desired Number: ");
    scanf("%d",&number);

    if(number%2 == 0)
    {
        printf("This is an Even Number...");
    }
    else
    {
        printf("This is an Odd Number...");
    }
    return 0;
}