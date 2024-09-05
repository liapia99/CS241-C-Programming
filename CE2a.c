/*
Program: CE2a.c 
Purpose: This program is to add two integer numbers and get
the sum. It demonstrates some of the components of a simple C program. 
Author: Julia Piascik
Course: CS 241-B C Programming Concepts 
Term: Fall 2024
Date: 9/05/2024
*/
#include <stdio.h>
/* main function */
int main(void){
/* variable definitions */
    int i1; /* first integer */
    int i2; /* second integer */
    int sum; /* result */

/* input section */
    printf("Please enter an integer: ");
    scanf("%d", &i1);

    printf("Please enter another integer: ");
    scanf("%d", &i2) ;

/* computation section */
    sum = i1 + i2;

/* output section */
    printf("The sum of %d and %d is %d.\n", i1, i2, sum);
/* exit */

    return 0;
} /* end of main */
/* EOF */
