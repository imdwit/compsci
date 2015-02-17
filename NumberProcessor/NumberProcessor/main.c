#define _CRT_SECURE_NOWARNINGS

#include <stdio.h>
#include <stdlib.h>
#define CLSUNIX  system("clear");
#define CLSWIN  system("cls");


int pause() {
    return 12000;
}

int main() {
    int numbersArray[0];
    int i =  1;
    int len = 0;
    int num;
    char choice;
    int option = 0;







    do { //DO WHILE STARTS HERE

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
                option = 1;
                pause();
                break;

            case 'B':
                printf("Option B \n");
                option = 2;
                pause();

                break;

            case 'C':
                printf("Option C \n");
                option = 3;
                pause();
                break;

            case 'D':
                printf("Option D \n");
                option = 4;
                pause();
                break;

            case 'E':
                
                for(int i = 0; i < len; i++) {
                    printf("%i, ",numbersArray[i]);
                }
                printf("\n\n\n");
                option = 5;
                pause();
                break;

            case 'Q':
                printf("Quit \n");
                option = 0;
                pause();
                break;

            default:
                printf(" ");
                
                continue;
                //printf("Pick another option \n");
               // pause();
        }// END SWITCH

    } while(option > 0 ); ///WHILE CHOICE DOESNT EQUAL 4;

    pause();
} //END MAIN