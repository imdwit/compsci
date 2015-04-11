//Group A Exam 2 Code 3/1/2015
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define CLEAR system("cls")

void displayCost(float *currentMilage, float *pricePerGallon, float *mpg, float *total) {
    *total = (*currentMilage * *pricePerGallon) / *mpg;
    printf("Total price of trip is $%.2f for %g miles \n", *total, *currentMilage);
}

void updateVariable(float *variable, char message[128]) {
    float temp;
    printf("%s \n", message);
    scanf("%f", &temp);
    *variable = temp;
}

void updateMilage(float *miles) {
    float temp;
    printf("How far was your trip? \n");
    scanf("%f", &temp);
    *miles += temp;
}


int main() {
    //Declaring Variables
    char choice;
    float currentMilage = 0;
    float pricePerGallon = 0;
    float mpg = 0;
    float total = 0;

    do { //DO WHILE STARTS HERE
        CLEAR;
        ///// Menu Layout
        printf("########XXXXXXXXXXX##########\n");
        printf("-------- MAIN MENU ----------\n");
        printf("=============================\n");
        printf("A) Enter the price of gas and your vehicles MPG \n");
        printf("B) Compute Trip \n");
        printf("Q) Quit \n\n");
        ///// end Menu Layout

        printf("Pick an option: \n");
        scanf("%c", &choice); //// choice selection
        choice = toupper(choice);
        switch (choice) {
            case 'A':
                updateVariable(&pricePerGallon, "How much is gas?");
                updateVariable(&mpg, "What is your vehicles MPG?");
                break; /// end of case A

            case 'B':
                updateMilage(&currentMilage);
                displayCost(&currentMilage, &pricePerGallon, &mpg, &total);
                break; /// end of Case B

            case 'Q':
                printf("\n Goodbye... \n\n\n");
                break; /// end of case Q

            default:
                printf("Pick another option \n");
                break;
        }// END SWITCH

    } while (choice != 'Q');

    return 0;

} //END MAIN