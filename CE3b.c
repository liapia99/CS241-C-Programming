/* Program: CE3b.c 
    Purpose: This program is to practice arithmetic expressions. 
    Author: Julia Piascik
    Course: CS 241-B C Programming Concepts 
    Term: Fall 2024 
    Date: 09/12/2024 
*/ 
/* */

#include <stdio.h>

/* main function */
int main(void) {
    /* Variable definitions */
    int a, b, c, d, n;
    double p, q, x;
    int r;  /* 'r' should be int for the remainder */

    /* Input section */
    printf("Please enter the value for real x: ");
    scanf("%lf", &x);  /* Use %lf for double */
    
    printf("Please enter the value for integer a: ");
    scanf("%d", &a);
    
    printf("Please enter the value for integer b: ");
    scanf("%d", &b);
    
    printf("Please enter the value for integer c: ");  /* Use lowercase 'c' */
    scanf("%d", &c);
    
    printf("Please enter the value for integer d: ");
    scanf("%d", &d);
    
    printf("Please enter the value for integer n: ");
    scanf("%d", &n);

    /* Computation section */
    p = 2.0 * x * x - 3.0 * x + 5.0;
    q = ((double) (a + b)) / ((double) (c + d));
    r = (1 << n) % 7;  /* Bitwise left shift and modulo */

    /* Output section */
    printf("The value for the polynomial p is %f.\n", p);
    printf("The value for the quotient q is %f.\n", q);
    printf("The value for the remainder r is %d.\n", r);  /* Print remainder as int */

    /* Exit */
    return 0;
    
} 
/* end of main */
/* EOF */
