#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter The Upper Limit: ");
    scanf("%d",&n);
    for (i = 0; i < n+1; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");

        }
        printf("\n");
    }
    
}