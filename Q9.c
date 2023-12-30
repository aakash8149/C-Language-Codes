// Number of Zeros Count...

#include <stdio.h>

int main()
{
    int n, count;

    printf("Enter The Number: ");
    scanf("%d", &n);

    while(n>0)
    {
        int r= n%10;

        if(r == 0)
        {
            count++;
        }
        n = n/10;
    }
    printf("%d",count);
}