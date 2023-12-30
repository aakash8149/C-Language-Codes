/* If a four-digit number is input through the keyboard, 
write a function to obtain the sum of the first and last digit of this number. 
(Input is 2041 the output will be 3).*/

#include<stdio.h>
int b,num1,i;
int main()
{
    printf("Enter a Number: ");
    scanf("%d",&num1);

    b = num1%10; // Last Digit
    
    while (num1>10)
    {
        num1=num1/10;
    }
    
    
    printf("%d",b + num1);
    

}

