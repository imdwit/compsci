//
//  main.c
//  sortsearch
//
//  Created by Dwight Doane on 4/10/15.
//  Copyright (c) 2015 Dwight Doane. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define HIGHEST 10
#define LOWEST 1
#define CLEAR system("cls")

void counted(int allNumbers[HIGHEST], int randomNumbers[SIZE]);
void displayLowHighAverage(int randomNumbers[SIZE]);
int getChoice();
void missing(int allNumbers[HIGHEST], int randomNumbers[SIZE]);
void setAllNumbers(int allNumbers[HIGHEST]);
void setRandomNumbers(int randomNumbers[SIZE]);
void showMenu();
void uniques(int allNumbers[HIGHEST], int randomNumbers[SIZE]);


int main() {
    srand((unsigned)time(NULL)); //seed random
    int randomNumbers[SIZE] = {0}; // declare an array to hold all the random numbers
    int allNumbers[HIGHEST] = {0}; // holds all numbers 1-200
    int choice;

    setRandomNumbers(randomNumbers); //fill the array with random numbers
    setAllNumbers(allNumbers); //fills allNumbers with 1-200

    
    do {
        showMenu();
        choice = getChoice();
        
        switch (choice) {
            case 1:
                missing(allNumbers, randomNumbers);
                break;
            case 2:
                uniques(allNumbers, randomNumbers);
                break;
            case 3:
                counted(allNumbers, randomNumbers);
                break;
            case 4:
                displayLowHighAverage(randomNumbers);
                break;
            case 5:
                printf("Quitting... \n\n");
                break;
            default:
                printf("Invalid choice. Pick another option \n");
        }
        
    } while(choice != 5);
    
    return 0;
}

//functions
void missing(int allNumbers[HIGHEST], int randomNumbers[SIZE]) {
    
    int i, j, counter;
    for(i = 0; i < HIGHEST; i++) {
        counter = 0;
        for (j = 0; j < SIZE; j++) {
            if(allNumbers[i] == randomNumbers[j]) {
                counter++;
            }
        }
        if( counter < 1) {
            printf("%i is missing\n", allNumbers[i]);
        }
    }
}


void counted(int allNumbers[HIGHEST], int randomNumbers[SIZE]) {
    int i, j, counter;
    for(i = 0; i < HIGHEST; i++) {
        counter = 0;
        for (j = 0; j < SIZE; j++) {
            if(allNumbers[i] == randomNumbers[j]) {
                counter++;
            }
        }
        if(counter > 0)
            printf("%i was found %i times\n", allNumbers[i], counter);
    }
}


void displayLowHighAverage(int randomNumbers[SIZE]) {
    int lowest = HIGHEST + 1, highest = 0, average = 0, sum = 0, count = 0, i;
    for(i = 0; i < SIZE; i++) {
        if(randomNumbers[i] < lowest )
            lowest = randomNumbers[i];
        if(randomNumbers[i] > highest)
            highest = randomNumbers[i];
        count++;
        sum+=randomNumbers[i];
    }
    average = sum/count;
    printf("Lowest number is: %i \n", lowest);
    printf("Highest number is: %i \n", highest);
    printf("Average number is: %i \n", average);
}

int getChoice() {
    int temp;
    printf("Select an option 1-5 \n");
    scanf("%i", &temp);
    return temp;
}

void setAllNumbers(int allNumbers[HIGHEST]) {
    int i;
    for(i = 0; i < HIGHEST; i++) {
        allNumbers[i] = i+1;
    }
}

void setRandomNumbers(int randomNumbers[SIZE]) {
    int i;
    for(i = 0; i < SIZE; i++) {
        randomNumbers[i] = LOWEST + rand() % (HIGHEST - LOWEST + 1);
    }
}

void showMenu() {
    CLEAR;
    printf("########XXXXXXXXXXX##########\n");
    printf("-------- MAIN MENU ----------\n");
    printf("=============================\n");
    printf("1) In order from LOW to HIGH display the missing numbers \n");
    printf("2) In order from HIGH to LOW display the UNIQUE random numbers \n");
    printf("3) In any order display each random number and the number of times it was found \n");
    printf("4) Display the lowest, highest and average of the random numbers \n");
    printf("5) Quit \n\n");
}

void uniques(int allNumbers[HIGHEST], int randomNumbers[SIZE]) {
    int i, j, counter, uniquenums = HIGHEST;
    for(i = HIGHEST; i > 0; --i) {
        counter = 0;
        for (j = 0; j < SIZE; j++) {
            if(allNumbers[i] == randomNumbers[j]) {
                counter++;
            }
        }
        if( counter == 1) {
            printf("%i is unique\n", allNumbers[i]);
        }
        if(counter > 1) {
            uniquenums--;
        }
    }
    if(uniquenums < 1) {
        printf("No unique numbers\n\n");
    }
}
