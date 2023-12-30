#include<stdio.h>
int main()
{
    int n,first = 0, second = 1, next,terms;

    printf("Enter The Value upto which you want to Print the Fibonacci Series: ");
    scanf("%d",&terms);
    
    for (n=0;n<terms;n++)
    
    {
        if (n<=1)
        {
            next = n;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
            
        }printf("%d\t",next);
        
    }
    
    
}