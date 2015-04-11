//
//  main.c
//  09A
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
    double x = 0;
    int n = 0;
    int choice = 0;

    do {
        CLEARMAC;
        CLEARWIN;
        printf("########XXXXXXXXXXX##########\n");
        printf("-------- MAIN MENU ----------\n");
        printf("=============================\n");
        printf("1) Enter a New Number \n");
        printf("2) Cube the number \n");
        printf("3) Square the number \n");
        printf("4) Display Even or Odd \n");
        printf("5) Quit \n\n");

        printf("Pick an option: \n");
        scanf("%i", &choice);

        switch(choice) {
        case 1:
            printf("Enter your number : \n");
            scanf("%i", &n);
            printf("You entered %i \n", n);
            break;
        case 2:
            x = n * n * n;
            printf("%i cubed is %.2lf \n", n, x);
            break;
        case 3:
            x = n * n;
            printf("%i squared is %.2lf \n", n, x);
            break;
        case 4:
            if(n % 2 == 0) {
                printf("%i is Even \n", n);
            }
            else {
                printf("%i is Odd \n", n);
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
