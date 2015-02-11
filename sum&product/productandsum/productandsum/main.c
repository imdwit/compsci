//
//  main.c
//  productandsum
//
//  Created by Dwight Doane on 1/22/15.
//  Copyright (c) 2015 Dwight Doane. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a;
    int b;
    
    int product;
    int sum;
    
    
    printf("Please input an integer ");
    scanf("%d", &a);
    
    printf("Please input another integer ");
    scanf("%d", &b);
    
    sum = a + b;
    product = a * b;
    
    printf("%d + %d is: %d\n", a, b, sum);
    printf("%d * %d is: %d\n", a, b, product);
    
    return 0;
}
