#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ans='y';
    printf("This is a budgeting console program that calculates for you how many months and years \nyou need to work in order to save a specific amount of money to live \nfor as many months as you would like without needing to work\nBut first you need to answer some questions\n");
    while(ans=='y'){
        float inc, exp, profit, br, aexp, buffer, n2s, m, y;
        int rm;
        printf("\nWhat's your monthly income? (in any currency)\n");
        scanf("%f", &inc);
        printf("What's your monthly expenses? (in any currency)\n");
        scanf("%f", &exp);
        profit = inc - exp;
        printf("For how many months do you plan to save money?\n");
        scanf("%d", &rm);
        printf("What's your buffer ratio? (in percentage, that's for keeping you save from months where you may spend a little bit more money)\n");
        scanf("%f", &br);
        aexp = exp * rm;
        buffer = aexp * br*0.01;
        n2s = aexp + buffer;
        m = n2s/profit;
        y = m/12;
        printf("You need to save %.2f\n", n2s);
        printf("We will need to work for %.0f months in order to save that amount\n", m);
        printf("We will need to work for %.0f years in order to save that amount\n", y);
        printf("Do you want to calculate again? (y or n)\n");
        getchar();
        scanf("%c", &ans);
    }
    printf("Thank you for using my program!");
}
