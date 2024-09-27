// This program is designed to compute paying off Credit Card Debt
// The following code is written and compiled with CLion
//
// Program: Piascik_creditcard.c
// Purpose: To compute paying off Credit Card Debt and print the interest paid and the remaining balance at the end of each monthly cycle

// Author: Julia Piascik
// Course: CS-241 C-Programming
// Term: Fall 2024
// Date: 9/30/2024

#include <stdio.h>

int credit_lim, i;
float balance, apr, mon_rate, interest, new_balance, mon_pay;

int main() {
  //Ask user for input values
  
    printf("Enter the credit limit:\n");
    scanf("%d", &credit_lim);
    
    printf("Enter the balance on the card:\n");
    scanf("%f", &balance);
    
    printf("Enter the APR:\n ");
    scanf("%f", &apr);
    
    printf("Enter the monthly payment:\n");
    scanf("%f", &mon_pay);
    
    mon_rate = (apr / 12)/100;
    
    printf("\nMonth       Balance        Interest       Payment     New Balance\n");
    printf("---------------------------------------------------------------\n");

  // For loop to get all 12 months 
    for (i = 1; i =< 12; i++) {

      // Calculate interest and the new balance 
      
        interest = balance * mon_rate;
        new_balance = (balance - mon_pay) + interest;

      // If in the first month, the balance should be equal to what the user inputs
      
        if ( i != 1){
            balance = new_balance; 
            interest = new_balance * mon_rate;
            new_balance = (balance - mon_pay) + interest;
        }
      
       // If the balance is less than or equal to the monthly payment, the new monthly payment should be the interest and balance
        if (balance <= mon_pay){
            mon_pay = interest + balance;
        }

       // If the monthly payment is equal to the interest and balance, the user should pay just the this value and nothing more
        if (mon_pay == (interest + balance)){
            new_balance = ((interest + balance) - mon_pay);
        }
        
        printf("%-10d $%-12.2f $%-12.2f $%-12.2f $%-12.2f\n", i, balance, interest, mon_pay, new_balance);
        
}
  

    return 0;
}
