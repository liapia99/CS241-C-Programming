/*
Program: CE2b.c 
Purpose: This program is to use the arithmetic operators in C.
Author: Julia Piascik
Course: CS 241-B C Programming Concepts 
Term: Fall 2024
Date: 9/05/2024
*/

#include <stdio.h>

void main() {
    int a = 9, b = 4, c;
    c = a+b;
    printf("a + b = %d \n",c);
    c = a-b;
    printf("a - b = %d \n",c);
    c = a*b;
    printf("a * b = %d \n",c);
    c = a/b;
    printf("a / b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n", c);
}
