#include<stdio.h>
int main()
{
    int a,i;
    
    printf("Enter the value of number: " );
    scanf("%d",&a);

    for (i=0;i<=a;i++)
    {
        if(i%2==0)
        {
            printf("Numbers :%d\n",i);
        }
    }
return 0;
}