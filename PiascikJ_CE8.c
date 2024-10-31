// This program uses structures to simulate the multiplication of fractions. 
// Program: PiascikJ_CE8.c
// Purpose: To multiply fractions. 
//
// Author: Julia Piascik
// Course: CS-241-B C PROGRAMMING CONCEPTS 
// Term: Fall 2024
// Date: 10/31/2024

#include <stdio.h>

typedef struct{
    int numerator;
    int denominator;
} FRACTION;
int main() {
    // Write C code here
    FRACTION fr1;
    FRACTION fr2;
    FRACTION res;
    
    printf("Key first fraction in the form of x/y: ");
    scanf("%d / %d", &fr1.numerator, &fr1.denominator);
    printf("Key second fraction in the form of x/y: ");
    scanf("%d / %d", &fr2.numerator, &fr2.denominator);
    
    res.numerator = fr1.numerator * fr2.numerator;
    res.denominator = fr1.denominator * fr2.denominator;
    
    printf("\n The result of %d/%d * %d/%d is %d/%d",fr1.numerator, fr1.denominator, fr2.numerator, fr2.denominator, res.numerator, res.denominator);
    
    return 0;
}
