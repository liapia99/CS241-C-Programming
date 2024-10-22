// This program is designed to print CE6 - which is a linear search
// Program: PiascikJ_CE6.c
// Purpose: To print CE6.
//
// Author: Julia Piascik
// Course: CS-241-B C PROGRAMMING CONCEPTS 
// Term: Fall 2024
// Date: 10/22/2024


#include <stdio.h>

// Original Classwork did not work - so I tried to edit it
int main() {
    int array[100], number, i, n;
    int found = 0;  

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter a number to search: ");
    scanf("%d", &number);

    for (i = 0; i < n; i++) {
        if (array[i] == number) {
            found = 1;  
            printf("%d is present at location %d.\n", number, i + 1); //+1 
            break;  
        }
    }

    if (!found) {
        printf("%d isn't present in the array.\n", number);
    }

    return 0;
}
