// WAP in C to check whether the entered number is a Prime Number or Not.

#include<stdio.h>

int main()
{
    int n;
    int i=2;
    printf("Enter The Number: ");
    scanf("%d",&n);

    for(i;i<n;i++)
    {
        if (n%i != 0)
        {
            printf("Prime Number");
            break;
        }
        else
        {
            printf("Not Prime Number");
            break;
        }
        
    }
    return 0;
}


