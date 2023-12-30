#include<stdio.h>
int main()
{
    
    printf("Printing Patterns In C program\n\t");

    int i,j,rows,k;
    printf("Enter The Values:");
    scanf(" %d",&rows);

    for (i = 0; i <= rows; i++)
    {
        for (j = 0; j < i; j++)
        {
            for (k = 1; k <rows; k++)
            {
                printf("%d",k);
            }
            
        }
        printf("\n");
    }
    
return 0;
}