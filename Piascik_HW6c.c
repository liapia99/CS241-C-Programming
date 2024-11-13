// The following program multiplies fractions through passing structures through pointers 
// Program: Homework 6 - Piascik_HW6c.c
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

void getFr (FRACTION* pFr);
void multFr (FRACTION* pFr1, FRACTION* pFr2, FRACTION* pRes2);
void printFr (FRACTION* pFr1, FRACTION* pFr2, FRACTION* pRes);

int main(void) {
    FRACTION fr1;
    FRACTION fr2;
    FRACTION res; 
    
    getFr(&fr1);
    getFr(&fr2);
    multFr (&fr1, &fr2, &res);
    printFr (&fr1, &fr2, &res);
    return 0;
}

void getFr(FRACTION* pFr){
    FRACTION fr;
    
    printf("Write a function in the form of x/y: ");
    scanf("%d/%d", &pFr->numerator, &(*pFr).denominator);
    return;
}

void multFr(FRACTION* pFr1, FRACTION* pFr2, FRACTION* pRes){
    pRes->numerator = pFr1->numerator * pFr2->numerator;
    pRes->denominator = pFr1->denominator * pFr2->denominator;
    
    return;
}

void printFr ( FRACTION* pFr1, FRACTION* pFr2, FRACTION* pRes){
    printf("\nThe result of %d/%d * %d/%d is %d/%d\n", pFr1->numerator, pFr1->denominator, pFr2->numerator, pFr2->denominator, pRes->numerator, pRes->denominator);
    return;
}
