#include<stdio.h>
int main()
{
    int i,a;

    printf("Enter The Number Upto Which U Want to Print The Even Number:  ");
    scanf("%d",&a);

    printf("The Even Numbers are:\n ");

    for(i=0;i<a;i++)
    {

        if (i%2==0)
        {
            printf("Even Number: %d\n",i);
        }
        else
        {
            printf("\nOdd Numbers: %d\n",i);
        }

    }

    return 0;
}

#include <stdio.h>
int main()
{
    int a = (5 % -2);
    printf("Value is: %d", a);
    return 0;
}




