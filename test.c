//
// Created by Nguyen Minh Hung on 17/11/2023.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    char grade;
    printf("Enter grade: ");
    scanf("%c", &grade);
    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
        case 'C':
            printf("Well done.\n");
            break;
        case 'D':
            printf("You passed.\n");
            break;
        case 'F':
            printf("Better try again.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }
}