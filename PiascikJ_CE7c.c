// This program demonstrates basic pointer manipulation by iterating through an array and printing both the memory addresses and values of each element in the array var
// Program: PiascikJ_CE7c.c
// Purpose: To demonstrate basic pointer manipulation by iterating through an array and printing both the memory addresses and values of each element in the array var
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
// let us have address of the first element in pointer
ptr = var; i = 0;
while ( ptr <= &var[MAX - 1] ) {
printf("Address of var[%d] = %x\n", i, ptr );
printf("Value of var[%d] = %d\n", i, *ptr );
/* point to the previous location */
ptr++;
i++;
}
return 0; }
