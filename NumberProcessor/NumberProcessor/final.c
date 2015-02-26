#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define CLSUNIX  system("clear")
#define CLSWIN  system("cls")
#define PAUSE system("pause")

int main() {
    int numbersArray[20];
    int i = 0;
    int len = 0;
    char choice;
    int quit = 0;
    int num = 0;
    int lowestNumber;
    int average;
    int finalAverage;
    do { //DO WHILE STARTS HERE
        CLSUNIX;        //CLSWIN FOR UNIX/MAC USES
        CLSWIN;        //CLSWIN for WINDOWS users
        printf("########XXXXXXXXXXX##########\n");
        printf("-------- MAIN MENU ----------\n");
        printf("=============================\n");
        printf("A) Enter a New Number \n");
        printf("B) Display the highest number entered \n");
        printf("C) Display the Lowest Number entered \n");
        printf("D) Display the Average of all numbers entered \n");
        printf("E) Display how many numbers were entered \n");
        printf("Q) Quit \n\n");


        printf("Enter a Letter: \n");
        scanf("%c",&choice);
        switch(choice) {
            case 'A':
                printf("Enter an integer: \n");
                scanf_s("%i", &num);
                numbersArray[len] = num;
                len++; PAUSE;
                break;
            case 'B':
                for(i = 0; i < len; i++) {
                    if( numbersArray[i] > num) num = numbersArray[i];
                }
                printf("HIGHEST NUMBER IS: %i", num);
                num = 0; //RESET NUM;
                PAUSE;
                break;
            case 'C':
               lowestNumber=numbersArray[0];
                for(i = 0; i < len; i++){
                    if( numbersArray[i] < l) l = numbersArray[i];
                }
                printf("LOWEST NUMBER IS: %i \n", l);
                l = 0;
                pause;
                break;

            case 'D':
                for(i = 0; i < len; i++) {
                    average += numbersArray[i];  }
                    printf("The mean is: %i \n", fAver);
                }
                finalAverage = average/len;
                PAUSE;
                break;
            case 'E':
                for(i = 0; i < len; i++ ) {
                    printf("%i, ", numbersArray[i]);
                }
                printf("\n\n\n");
                printf("LENGTH IS AT %i \n", len); PAUSE;
                break;
            case 'Q':
                printf("Quitting... \n");
                quit = 1;
                break;
            default:
                printf("Pick another option \n");
            }// END SWITCH
    } while(quit != 1 ); ///WHILE quit DOESNT EQUAL 1;
    return 0;
} //END MAIN