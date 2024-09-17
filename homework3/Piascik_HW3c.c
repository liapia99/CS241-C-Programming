// The purpose of this code is to make a program that displays multiple variables.
// The following code is written and compiled with CLion
// Program: Piascik_HW3c.c
// Purpose: The purpose of this program is to use multiple variables to do multiple calculations.

// Author: Julia Piascik
// Course CS-241-B C PROGRAMMING CONCEPTS 
// Term Fall 2024
// Date: 9/17/2024

#include <stdio.h>

int main() {
    int a = 125, b = 12345;  //defining the variables
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("%d\n", a+b);     
    printf("%f\n", (dx) + (double)ax);
    printf("%f\n", a + x);
    printf("%d\n", s + b);
    printf("%d\n", ax + b);
    printf("%d\n", ax + ux);
    printf("%f\n", x + c);
    printf("%d\n", s + c);
    printf("%d\n", ax + c);
    printf("%d\n", a + c);

    return 0;   
}
