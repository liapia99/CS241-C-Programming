/* 
This program prints the tuition at Strange College. Strange charges $10 for registration, plus $10 per unit and a penalty of $50 for each 12 units. or fraction of 12, over 12.

*/
// Program: PiascikJ_CE5.c
// Purpose: To print CE5.
//
// Author: Julia Piascik
// Course: CS-241-B C PROGRAMMING CONCEPTS 
// Term: Fall 2024
// Date: 10/1/2024

#include <stdio.h>

#define REG_FEE 10
#define UNIT_Fee 10
#define EXCESS_FEE 50

int calculateFee (int firstTerm, int secondTerm, int thirdTerm);
int termFee (int units);

int main(void) {
    int firstTerm;
    int secondTerm;
    int thirdTerm;
    int totalFee;
    
    printf("Enter units for first term: ");
    scanf("%d", &firstTerm);
    printf("Enter units for second term: ");
    scanf("%d", &secondTerm);
    printf("Enter units for third term: ");
    scanf("%d", &thirdTerm);
    
    totalFee = calculateFee(firstTerm, secondTerm, thirdTerm);
    printf("\nThe total tuition is: %8d\n", totalFee);
    
    return 0;
}//main

/* ========calculateFee============
calculate the total fees for the year. 
Pre The number of units to be taken each term. 
Post Returns the annual fees.

*/

int calculateFee (int firstTerm, int secondTerm, int thirdTerm){
    int fee;
    
    fee = termFee(firstTerm) + termFee(secondTerm) + termFee(thirdTerm);
    return fee;
    
}
/* ========termFee============
calculate the tuition for one term. 
Pre units contains units for the term
Post The fee is calculated and returned

*/

int termFee (int units){
    int totalFees;
    
    totalFees = REG_FEE + (units * UNIT_Fee);
    
    if (units > 12) {
        totalFees += ((units - 1) / 12) * EXCESS_FEE;
    }
    
    return totalFees;
    
}
