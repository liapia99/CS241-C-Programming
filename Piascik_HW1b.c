// The following program will write a C program to calculate the area and circumference of a circle of radius 2.35 meters.
// Program: Homework 1 - Piascik_HW1b.c
// Purpose: To compute the calculations of the area and circumference of a circle with a radius of 2.35 meters.
//
// Author: Julia Piascik
// Course CS-241-B C PROGRAMMING CONCEPTS 
// Term Fall 2024
// Date: 9/3/2024

#include <stdio.h>
#include <math.h>

#define PI 3.1415926 // defining PI to use in calculating area and circumference

// Defining variables for radius
float rad = 2.35; 

// Defining variables for area and circumference
float area, circ;

int main() {
    // Calculating the area and circumference of the circle
    area = PI * (rad * rad);
    circ = 2 * PI * rad;
  
    // Printing out the solutions
    printf("The circumference of a circle with a radius of 2.35 is: %f meters.\n", circ);
    printf("The area of a circle with a radius of 2.35 is: %f meters squared.\n", area);

    return 0;
}

