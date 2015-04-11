//
//  main.c
//  arrays1
//
//  Created by Dwight Doane on 4/8/15.
//  Copyright (c) 2015 Dwight Doane. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

#define PAUSE system("pause")
#define CLEAR system("cls")


void displayAverage(int numbersArray[128], int count);
void displayNumbers(int numbersArray[128], int count);
void displaySum(int numbersArray[128], int count);
void enterNumber(int numbersArray[128], int *count);
int getChoice();
void showMenu();

int main() {
    // insert code here...
    int numbersArray[128] = {0};
    int count = 0;
    int choice;

    do {
        showMenu();
        choice = getChoice();
        switch (choice) {
            case 1:
                enterNumber(numbersArray, &count);
                break;
            case 2:
                displaySum(numbersArray, count);
                break;
            case 3:
                displayAverage(numbersArray, count);
                break;
            case 4:
                displayNumbers(numbersArray, count);
                break;
            case 5:
                printf("Quitting.... \n");
                break;
            default:
                printf("Invalid choice. Pick another option \n");
                break;
        }
        
        
    } while(choice != 5);


    return 0;
}


int getChoice() {
    int temp;
    printf("Select an option 1-5 \n");
    scanf("%i", &temp);
    return temp;
}

void displayAverage(int numbersArray[128], int count) {
    int average = 0;
    int i;
    
    if(count == 0) {
        printf("There are no numbers to average \n");
        return;
    }
    for (i = 0; i < count; i++) {
        average += numbersArray[i];
    }
    
    average = average / count;
    printf("The average is: %i \n", average);
}

void displayNumbers(int numbersArray[128], int count) {
    int i;
    printf("\n :::::Displaying numbers::::: \n");
    if ( count == 0) printf("No numbers to display \n");
    for(i = 0; i < count; i++) {
        printf("%i: %i \n", (i + 1), numbersArray[i]);
    }
}

void displaySum(int numbersArray[128], int count) {
    int sum = 0;
    int i;
    for(i = 0; i < count; i++) {
        sum += numbersArray[i];
    }
    printf("The sum is %i \n", sum);
    PAUSE;
}

void enterNumber(int numbersArray[128], int *count) {
    int temp;
    printf("Add a number \n");
    scanf("%i", &temp);
    numbersArray[*count] = temp;
    (*count)++;
}

void showMenu(int choice) {
    CLEAR;
    printf("########XXXXXXXXXXX##########\n");
    printf("-------- MAIN MENU ----------\n");
    printf("=============================\n");
    printf("1) Enter a Number \n");
    printf("2) Display the sum of all numbers entered \n");
    printf("3) Display the average of all Numbers entered \n");
    printf("4) Display all numbers entered \n");
    printf("5) Quit \n\n");
}


