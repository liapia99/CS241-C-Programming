// The following program multiplies fractions using a type-defined structure 
// Program: Homework 6 - Piascik_HW6b.c
//
// Author: Julia Piascik
// Course CS-241-B C PROGRAMMING CONCEPTS 
// Term Fall 2024
// Date: 11/13/2024

#include <stdio.h>

typedef struct{
    int numerator; 
    int denominator;
} FRACTION;

FRACTION getFr (void);
FRACTION multFr (FRACTION fr1, FRACTION fr2);
void printFr (FRACTION fr1, FRACTION fr2, FRACTION result);

int main(void) {
    FRACTION fr1;
    FRACTION fr2;
    FRACTION res; 
    
    fr1 = getFr();
    fr2 = getFr();
    res = multFr (fr1, fr2);
    printFr ( fr1, fr2, res);
    return 0;
}

FRACTION getFr(void){
    FRACTION fr;
    
    printf("Write a function in the form of x/y: ");
    scanf("%d/%d", &fr.numerator, &fr.denominator);
    return fr;
}

FRACTION multFr(FRACTION fr1, FRACTION fr2){
    FRACTION res;
    
    res.numerator = fr1.numerator * fr2.numerator;
    res.denominator = fr1.denominator * fr2.denominator;
    return res;
}

void printFr ( FRACTION fr1, FRACTION fr2, FRACTION res){
    printf("\nThe result of %d/%d * %d/%d is %d/%d\n", fr1.numerator, fr1.denominator, fr2.numerator, fr2.denominator, res.numerator, res.denominator);
    return;
}
