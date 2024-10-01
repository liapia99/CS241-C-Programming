// This program is designed to compute paying off Credit Card Debt
// The following code is written and compiled with CLion
//
// Program: Piascik_creditcard.c
// Purpose: To compute paying off Credit Card Debt and prints the interest paid and the remaining balance at the end of each monthly cycle

// Author: Julia Piascik
// Course: CS-241 C-Programming
// Term: Fall 2024
// Date: 9/30/2024

#include <stdio.h>

int credit_lim, i;
float balance, apr, mon_rate, interest, new_balance, mon_pay, interest_counter, og_balance;

int main() {
    printf("Enter the credit limit:\n");
    scanf("%d", &credit_lim);
    
    printf("Enter the balance on the card:\n");
    scanf("%f", &balance);
    
    printf("Enter the APR:\n ");
    scanf("%f", &apr);
    
    printf("Enter the monthly payment:\n");
    scanf("%f", &mon_pay);
    
    // Calculate monthly interest rate
    mon_rate = (apr / 12) / 100;
    og_balance = balance;
    
    printf("\nMonth       Balance        Interest       Payment     New Balance\n");
    printf("---------------------------------------------------------------\n");

    
    interest_counter = 0;
    i = 1;
    new_balance = balance;  

    
    while (new_balance > 0) {
        
        interest = balance * mon_rate;
        
        
        interest_counter += interest;
        
        
        new_balance = balance - mon_pay + interest;
        
       
        if (new_balance < 0) {
            mon_pay = balance + interest;  // Pay off remaining balance + interest
            new_balance = 0;  // Set new balance to 0 since debt is paid off
        }

        
        printf("%-10d $%-12.2f $%-12.2f $%-12.2f $%-12.2f\n", i, balance, interest, mon_pay, new_balance);

        
        balance = new_balance;

        
        i++;
    }
    interest_counter = interest_counter + og_balance;
    
    
    printf("\nTotal interest paid: $%.2f over %d months.\n", interest_counter, i - 1);

    return 0;
}
