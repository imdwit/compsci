#define _CRT_SECURE_NOWARNINGS

#include <stdio.h>
#include <stdlib.h>
#define CLSUNIX  system("clear");
#define CLSWIN  system("cls");


int main() {
    int numbersArray[0];
    int i =  1;
    int len = 0;
    int num;
    char choice;
    int quit = 0;







    do { //DO WHILE STARTS HERE
        CLSUNIX;
        //CLSWIN FOR UNIX/MAC USES
        CLSWIN;
        //CLSWIN for WINDOWS users
        
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
        printf("LENGTH IS AT %i \n", len);
        scanf("%c",&choice);

        switch(choice) {

            case 'A':
                printf("Enter an integer: \n");
                scanf("%i", &num);
                numbersArray[len] = num;
                len++;
                break;

            case 'B':
                printf("Option B \n");
                break;

            case 'C':
                printf("Option C \n");
                break;

            case 'D':
                printf("Option D \n");
                break;

            case 'E':
                for(int i = 0; i < len; i++) {
                    printf("%i, ", numbersArray[i]);
                }
                printf("\n\n\n");
                break;

            case 'Q':
                printf("Quitting... \n");
                quit = 1;
                break;

            default:
                printf("Pick another option \n");
        }// END SWITCH

    } while(quit != 1 ); ///WHILE quit DOESNT EQUAL 1;

} //END MAIN