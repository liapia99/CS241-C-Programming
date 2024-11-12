// The following program will sorts an array of student structures 
// Program: Homework 6 - Piascik_HW6a.c
//
// Author: Julia Piascik
// Course CS-241-B C PROGRAMMING CONCEPTS 
// Term Fall 2024
// Date: 11/12/2024

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define NUM_STU 5

typedef struct{
    char name[26];
    int midterm[3];
    int final;
} STUDENT;

void insertionSort (STUDENT list[], int last);

int main (void){
    STUDENT stuAry[NUM_STU] = 
    {
        {"Piascik, Julia", {85, 94, 79}, 93},
        {"Dye, John", {75, 93, 89}, 83},
        {"Foster, Ryan", {65, 92, 99}, 73},
        {"Heger, Campbell", {55, 91, 69}, 63},
        {"Kates, Declan", {45, 90, 59}, 53},
    };
    
    printf("Unsorted data:\n");
    for (STUDENT* pStuPtr = stuAry; pStuPtr < stuAry + NUM_STU; pStuPtr++)

    printf("%-26s %4d %4d %4d %4d\n",
            pStuPtr->name,
            pStuPtr->midterm[0],
            pStuPtr->midterm[1],
            pStuPtr->midterm[2],
            pStuPtr->final);
            
    printf("\n");
    
    insertionSort (stuAry, NUM_STU - 1);
    
    printf("Sorted data:\n");
    for (STUDENT* pStuPtr = stuAry; pStuPtr < stuAry + NUM_STU; pStuPtr++)
    printf("%-26s %4d %4d %4d %4d\n",
            pStuPtr->name,
            pStuPtr->midterm[0],
            pStuPtr->midterm[1],
            pStuPtr->midterm[2],
            pStuPtr->final);
    return 0;
}




void insertionSort (STUDENT list[], int last) {
    bool located;
    STUDENT temp;
    STUDENT* pCurrent;
    STUDENT* pWalker;
    STUDENT* pLast;

    for (pCurrent = list + 1, pLast = list + last; pCurrent <= pLast; pCurrent++) {
        located = false;
        temp = *pCurrent;

        for (pWalker = pCurrent - 1; pWalker >= list && !located;) {
            if (strcmp(temp.name, pWalker->name) < 0) {
                *(pWalker + 1) = *pWalker;
                pWalker--;
            } else {
                located = true;
            }
        }
        *(pWalker + 1) = temp;
    }

}
