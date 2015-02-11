//
//  main.c
//  shipping
//
//  Created by Dwight Doane on 2/3/15.
//

#include <stdio.h>

int main() {
    // insert code here...
    int weight;
    int distance;
    int rate;

    printf("Enter the package's weight in pounds \n");
    scanf("%d", &weight);

    printf("Enter the distance to ship the package in miles \n");
    scanf("%d", &distance);

    if(weight <= 10) {
        rate = 10;
    }
    else {
        rate = (10 + ((weight - 10) * .5 ));
    }
    if(distance % 500 == 0) {
        rate += (distance / 500 * 5);
    }
    else {
        rate += ((distance / 500 )* 5) + 5;
    }


    printf("It costs $%d to ship an item weighing %d pounds %d miles \n", rate, weight, distance);
    return 0;
} ///// END main
