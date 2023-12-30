#include <stdio.h>
int main()
{
    int principle = 5110000;
    int years = 5;
    float rate = 9.4;

    int SimpleInterest = (principle * years * rate) / 100;
    int amount_initially_Deposited = 109000;
    printf("Here is the Simple Interest for which you are Agreed With: %d\n", SimpleInterest);

    //

    // int k_k = principle+SimpleInterest+amount_initially_Deposited;

    // // printf("Your Total Cost of Studing in University is : %d\n",k_k);

    // double d = 0.33333333;

    // int pg__charges= 7000;

    // int total_spent_4years = pg__charges * 12*4;

    // // printf("Your PG Charges is Almost Rs.: %d\n",total_spent_4years );

    // int m_spent = k_k + total_spent_4years;

    // printf("Total Investment on My Education For 4 Year b.Tech Degree is Rs.: %d\n", m_spent);

    return 0;
}