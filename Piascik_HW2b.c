// This program is designed to print the value of the given mathematical expression when given a value
// Program: Piascik_HW2b.c
// Purpose: To print the sum of the expression when the user gives a value. 
//
// Author: Julia Piascik
// Course: CS-241-B C PROGRAMMING CONCEPTS 
// Term: Fall 2024
// Date: 9/10/2024


#include <stdio.h>
#include <math.h>

int x, n, i, fact;
double sum;

int main() {
    printf("Enter the value of x:");
    scanf("%d", &x);

    n = 10; fact = 1; sum = 1;

    for( i = 1; i <= n; i++){
        fact *= i;
        if(i % 2 == 0){
            if (i == 2 || i == 6 || i == 10){
                sum += -pow(x, i) / fact;
            }
            else{
                sum += pow(x, i) / fact;
            }

        }
    }
    printf("The sum is: %lf", sum);

    return 0;
}
