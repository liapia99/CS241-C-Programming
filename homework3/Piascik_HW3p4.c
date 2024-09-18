// This program is designed to convert days into years, weeks, and days. 
// The following code is written and compiled with CLion
//
// Program: Piascik_HW3p4.c
// Purpose: To convert days into years, weeks, and days. 

// Author: Julia Piascik
// Course CS-241-B C PROGRAMMING CONCEPTS 
// Term Fall 2024
// Date: 9/17/2024

#include <stdio.h>

int days, years, weeks;

int main() {

  printf("Enter the number of days: ");
  scanf("%d", &days);

  years = days / 365; 
  weeks = (days % 365) / 7; 
  days = days - ((years * 365) + ( weeks * 7));

  printf("Years: %d", years);
  printf("\n");
  printf("Weeks: %d", weeks);
  printf("\n");
  printf("Days: %d", days);

  return 0;
}
