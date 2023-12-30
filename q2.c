#include<stdio.h>

int main()
{
    char ch;

    printf("Enter The Character: ");
    scanf("%c", &ch);

    if (ch=="a"||ch=="e"||ch=="i"||ch=="o"||ch=="u"||ch=="A"||ch=="E"||ch=="I"||ch=="O"||ch=="U")
    {
        printf("It is a Vowel.");
    }
    else
    {
        printf("This is Consonant..");
    }
    return 0;
    
}