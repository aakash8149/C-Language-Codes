#include<stdio.h>

void disp1(void)
{
    printf("Hello Good Morning Everyone...\n");
}

void disp2(void)
{
    printf("Hello Good Evening Everyone...\n");
}

void disp3(void)
{
    printf("Bye, Good Nigth Everyone...\n");
}


int main()
{

    char ch;
    printf("Enter The Word:  ");
    scanf("%s",&ch);

    if (ch = "morning" || "Morning" || "MORNING")
    {
        disp1();
    }
    else if (ch = "evening" || "EVENING" || "Evening")
    {
        disp2();
    }
    else if (ch = "nigth" || "NIGTH" || "Nigth")
    {
        disp3();

    }
    
    
    
return 0;
}