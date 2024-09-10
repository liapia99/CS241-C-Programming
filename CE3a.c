// This program is designed to print the cosine value when given a value
// Program: CE3a.c
// Purpose: To print the cosine sum of the value the user gives.
//
// Author: Julia Piascik
// Course: CS-241-B C PROGRAMMING CONCEPTS 
// Term: Fall 2024
// Date: 9/10/2024

/* Cosine.c: cosine function approximation */
/* */
#include <stdio.h>
/* main function */
    int main(void)
    {
/* variable definitions */
    double x, y;
/* input section */
    printf("Please enter real value x: ");
    scanf("%lf", &x);
    /* computation section */
    y = 1 - (x*x)/(2.0*1.0) + (x*x*x*x)/(4.0*3.0*2.0*1.0) - (x*x*x*x*x*x)/(6.0*5.0*4.0*3.0*2.0*1.0);
    /* output section */
    printf("cos(%f) is approximately %f\n", x, y);
    /* exit */
    return 0;
} /* end of main */
/* EOF */
