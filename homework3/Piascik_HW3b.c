// This program is designed to compute the area and perimeter of a circle with a given radius
// The following code is written and compiled with CLion
//
// Program: Piascik_HW3b.c
// Purpose: To compute the area and perimeter of a circle with a given radius

// Author: Julia Piascik
// Course CS-241-B C PROGRAMMING CONCEPTS 
// Term: Fall 2024
// Date: 9/17/2024

#include <stdio.h>

float radius, a, p;

int main() {

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  a = 3.14159 * radius * radius;
  p = 3.14159 * 2 * radius;

  printf("Circumference of the circle = %f inches", p);
  printf("\n");
  printf("Area of the circle = %f square inches", a);

  return 0;
}
