//
//  main.c
//  variables&math
//
//  Created by Dwight Doane on 1/28/15.
//

#include <stdio.h>

int main() {
    float val1;
    float val2;
    float val3;
    float val4;
    float val5;
    float val6;
    
    printf("Please input an integer: \n");
    scanf("%f" , &val1);
    
    printf("Please input another integer: \n");
    scanf("%f", &val2);

    
    val3 = val1 / val2;
    
    
    val4 = val3 + val2 + val1;
    
    
    val5 = val1 * val1 * val1;
    
    
    val6 = val3 + val1 + val2 * 2;
    
    printf("The numbers entered are %.2f & %.2f \n", val1, val2);
    printf("%.2f / %.2f = %.2f \n", val1, val2, val3 );
    printf("%.2f + %.2f + %.2f = %.2f \n", val1, val2, val3, val4 );
    printf("%.2f cubed is %.2f \n", val1, val5);
    printf("%.2f + %.2f + %.2f * 2 =  %.2f \n", val3, val1, val2, val6);
    
    
    return 0;
} /****** END MAIN *****/
