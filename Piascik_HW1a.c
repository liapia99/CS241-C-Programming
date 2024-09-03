// The following program will write a C program to perform addition, subtraction, division, and multiplication of two numbers.
// Program: Homework 1 - Piascik_HW1a.c
// Purpose: To compute the calculations of addition, subtraction, division and multiplication.
//
// Author: Julia Piascik
// Course CS-241-B C PROGRAMMING CONCEPTS 
// Term Fall 2024
// Date: 9/3/2024

#include <stdio.h>

int val1 = 12;
int val2 = 16;
int val3 = 17;
int val4 = 13;
float val5 = 25.0;
float val6 = 21.0; 
float val7 = 2.56;
float val8 = 3.61;

int add1, sub1;
float div, mult;

int main() {
    add1 = val1 + val2;
    sub1 = val3 - val4;
    div = val5 / val6;
    mult = val7 * val8;

    printf("The sum of %d and %d is %d\n", val1, val2, add1);
    printf("The difference of %d and %d is %d\n", val3, val4, sub1);
    printf("The division of %f and %f is %f\n", val5, val6, div);
    printf("The multiplication of %f and %f is %f\n", val7, val8, mult);

    return 0;
}

