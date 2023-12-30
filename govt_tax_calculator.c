#include<stdio.h>
int main()
{
    //Calculate the Amount of Tax has to be given by an Individual to the Govt of India on behalf of their Annual Income...
    float tax; 
    int income;
    
    printf("Enter Your Annual Income :");
    scanf("%d",&income);

    if (income<=250000)
    {
        printf("No Tax has to be given!!!\n");
    }

    if(income>250000 && income<=500000)
    {
        tax  = tax + 0.05*(income - 250000);
    }

    if(income>=500000 && income<=1000000)
    {
        tax = tax + 0.20*(income - 500000); 
    }

    if(income>=1000000)
    {
        tax = tax + 0.30*(income - 1000000); 
    }

    printf("Your Income is %d and your tax amount is %f\n",income,tax);
return 0;
}