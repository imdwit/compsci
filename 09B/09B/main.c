//
//  main.c
//  09B
//
//  Created by Dwight Doane on 3/15/15.
//  Copyright (c) 2015 Dwight Doane. All rights reserved.
//
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define CLEARWIN  system("cls")
#define CLEARMAC system("clear")




int main() {
    // insert code here...
    int x = 0;
    int i;
    int length = 0;
    int choice;
    char myName[128] = "dwit";
    char backwards[128];
    printf("What is your name? \n");
    gets(myName);


    for(i=0; myName[i]!='\0'; ++i) length = i; //used to find the length of myName; since unix doesnt have strrev.

    for(i = length; i > 0; i--) {
        backwards[length - i] = myName[i -1]; //reverses myName
    }

    do {
        CLEARMAC;
        CLEARWIN;
        printf("########XXXXXXXXXXX##########\n");
        printf("-------- MAIN MENU ----------\n");
        printf("=============================\n");
        printf("1) Display your name \n");
        printf("2) Display your name X times \n");
        printf("3) Display your name backwards \n");
        printf("4) Display your name backwards X times \n");
        printf("5) Quit \n\n");

        printf("Pick an option 1-5: \n");
        scanf("%i", &choice);

        switch(choice) {
            case 1:
                printf("Your name is: %s \n", myName);
                break;
            case 2:
                printf("Enter a number between 1 and 100: \n");
                scanf("%i", &x);

                if(x < 1 || x > 100) {
                    printf("X has to be a real number between 1 and 100. Try again: \n");
                    scanf("%i", &x);
                }

                for(i = 0; i < x; i++) {
                    printf("%s \n", myName);
                }

                break;
            case 3:
                printf("%s \n", backwards);
                break;
            case 4:
                printf("Enter a number between 1 and 100: \n");
                scanf("%i", &x);

                if(x < 1 || x > 100) {
                    printf("X has to be a real number between 1 and 100. Try again: \n");
                    scanf("%i", &x);
                }
                for(i = 0; i < x; i++) {
                    printf("%s \n", backwards);
                }
                break;
            case 5:
                printf("\n*** aol voice ***\n Goodbye! \n\n");
                break;
            default:
                printf("Pick a different option \n");
        }

    } while(choice != 5);

    return 0;
} //END main()
