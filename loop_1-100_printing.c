#include<stdio.h>
int main()
{
    int a = 0, b = 0;

    while(a<=100)
    {
        if(a%2==0)
        {
            printf("Even Numbers are:\t");
            printf("%d\n",a);
        }
        a++;
        
    }

    while (b<=100)
    {
        if (b%2!=0)
        {
            printf("Odd Numbers are:\t");
            printf("%d\n",b);
        }
        b++;
    }
    
return 0;
}