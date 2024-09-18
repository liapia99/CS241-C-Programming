// This program is designed to accept two item's weight and number of purchases and calculate their average value. 
// The following code is written and compiled with CLion
//
// Program: Piascik_HW3p7.c
// Purpose: To accept two item's weight and number of purchases and calculate their average value. 

// Author: Julia Piascik
// Course CS-241-B C PROGRAMMING CONCEPTS 
// Term Fall 2024
// Date: 9/17/2024

#include <stdio.h>

float item, item2, weight, weight2, calc1, calc2, calc3, avg;

int main() {

  printf("Input the weight for the first item: ");
  scanf("%f", &weight);
  
  printf("Input the number of item 1: ");
  scanf("%f", &item);
  
  printf("Input the weight for the second item: ");
  scanf("%f", &weight2);
  
  printf("Input the number of item 2: ");
  scanf("%f", &item2);
  
  calc1 = weight * item;
  calc2 = weight2 * item2; 
  calc3 = item + item2;
  
  avg = (calc1 + calc2) / calc3; 

  printf("Average Value =  %f", avg);
  
  return 0;
}
