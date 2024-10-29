// This program is designed to increment the variable pointer to access each succeeding element of the array
// Program: PiascikJ_CE7a.c
// Purpose: To increment the variable pointer to access each succeeding element of the array
//
// Author: Julia Piascik
// Course: CS-241-B C PROGRAMMING CONCEPTS 
// Term: Fall 2024
// Date: 10/29/2024

#include <stdio.h>
const int MAX = 3;
int main () {
int var[] = {10, 100, 200};
int i, *ptr;
/* let us have array address in pointer */
ptr = var;
for ( i = 0; i < MAX; i++) {
printf("Address of var[%d] = %x\n", i, ptr );
printf("Value of var[%d] = %d\n", i, *ptr );
/* move to the next location */
ptr++; }
return 0; }
