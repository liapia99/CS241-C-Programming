// This program is designed to print the prime numbers of a user given value.
// Program: Piascik_HW2a.c
// Purpose: To print the prime numbers of a user given value.
//
// Author: Julia Piascik
// Course: CS-241-B C PROGRAMMING CONCEPTS 
// Term: Fall 2024
// Date: 9/10/2024



#include <stdio.h>
int prime(int num){
    if( num <= 1){
        return 0;
    }
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}
void printPrime(int l){
    printf("Prime numbers of %d are: \n", l);
    for (int i = 2; i <= l; ++i){
        if (prime(i)){
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter in a number to get its prime number:");
    scanf("%d", &n);
    printPrime(n);
    return 0;
    
}
