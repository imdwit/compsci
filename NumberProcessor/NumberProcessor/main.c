//Group A Exam 2 Code 3/1/2015
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define CLSUNIX system("clear")
#define CLSWIN system("cls")
#define PAUSE system("pause")

int enterNumber() {
    printf("Enter a new number: \n");
    int num;
    scanf("%i", &num);
    
    printf("ENTEREED: %i \n", num);
    return num;
}

int findHighestNumber(int num, int highest) {
    if(num > highest) {
        return num;
    }
    else{
        return highest;
    }
}

int findLowestNumber(int num, int lowest) {
    
    if(lowest == 0) lowest = num;
    if(num > lowest) {
        return lowest;
    }
    else {
        return num;
    }
}


void calcAverage(int total, int counter) {
    int average;
    average = total/counter;
    printf("The average of all the numbers is : %i \n", average);
}

void printHighestNumber(int highest) {
    printf("The highest number is: %i \n", highest);
}

void printLowestNumber(int lowest) {
    printf("The lowest number is: %i \n", lowest);
}

void totalNumbers(int counter) {
    printf("Total numbers entered : %i \n", counter);
}

int main() {
    //Declaring Variables
    
    char choice;
    int highestNumber = 0;
    int lowestNumber = 0;
    int num;
    int counter = 0;
    int total = 0;
    int average;

    do { //DO WHILE STARTS HERE
        ///// Menu Layout
        printf("########XXXXXXXXXXX##########\n");
        printf("-------- MAIN MENU ----------\n");
        printf("=============================\n");
        printf("A) Enter a New Number \n");
        printf("B) Display the highest number entered \n");
        printf("C) Display the Lowest Number entered \n");
        printf("D) Display the Average of all numbers entered \n");
        printf("E) Display how many numbers were entered \n");
        printf("Q) Quit \n\n");  ///// end Menu Layout

        printf("Enter a Letter: \n");
        scanf("%c", &choice); //// choice selection
        choice = toupper(choice);
        switch (choice) {
            case 'A':
                num = enterNumber();
                highestNumber = findHighestNumber(num, highestNumber);
                lowestNumber = findLowestNumber(num, lowestNumber);
                total+= num;
                counter++;
                break; /// end of case A
                
            case 'B':
                printHighestNumber(highestNumber);
                break; /// end of Case B
                
            case 'C':
                printLowestNumber(lowestNumber);
                break; /// end of case C
                
            case 'D':
                calcAverage(total, counter);
                break; /// end of case D
                
            case 'E':
                totalNumbers(counter);
                break; /// end of case E

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