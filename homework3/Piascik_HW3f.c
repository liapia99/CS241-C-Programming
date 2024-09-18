// This program is designed to compute the product of two user given integers. 
// The following code is written and compiled with CLion
//
// Program: problem6.c
// Purpose: To compute the product of two user given integers. 

// Author: Julia Piascik
// Course CS-241-B C PROGRAMMING CONCEPTS 
// Term Fall 2024
// Date: 9/17/2024

#include <stdio.h>

int int1, int2, total;


int main() {

  printf("Input the first integer: ");
  scanf("%d", &int1);
  
  printf("Input the second integer: ");
  scanf("%d", &int2);

  total = int1 * int2; 

  printf("Product of the above two integers =  %d", total);
  
  return 0;
}
