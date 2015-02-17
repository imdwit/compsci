//
//  main.c
//  payroll
//
//  Created by Dwight Doane on 2/9/15.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define FEDTAX .27
#define MEDICALINSURANCE .14



float calculateTax(float pay, float tax) {
    float taxedPay = (pay * tax);
    return taxedPay;
}

int main() {
    // insert code here...
    float hourlyRate;
    float hoursWorked;
    double regPay;
    float grossPay;
    float overTimePay;
    float netPay;
    float fedTaxed;
    float medicalTax;


    printf("Enter hours worked: \n");
    scanf("%f", &hoursWorked);

    printf("Enter hourly rate: \n");
    scanf("%f", &hourlyRate);

    if(hoursWorked > 40) {
        //WORKED OVERTIME
        regPay = (hourlyRate * 40);
        overTimePay =  ((hourlyRate * 1.5) * (hoursWorked - 40));
        grossPay = regPay + overTimePay;
    } // END IF
    else {
        //DID NOT WORK OVERTIME
        regPay = (hourlyRate * hoursWorked);
        overTimePay = 0;
        grossPay = regPay;
    } ///END ELSE


    fedTaxed = FEDTAX * grossPay;//calculateTax(grossPay, FEDTAX);
    medicalTax = MEDICALINSURANCE * grossPay;
    netPay = grossPay - (fedTaxed + medicalTax);
    

    printf("Hourly Rate: $%.2f \n", hourlyRate);
    printf("Hours Worked: $%.2f \n", hoursWorked);
    printf("Overtime pay is $%.2f \n", overTimePay);
    printf("Gross pay is $%.2f \n", grossPay);
    printf("Regular pay is $%.2f \n", regPay);


    printf("Federal tax amount: $%.2f \n", fedTaxed);
    printf("Medical Insurance paid: $%.2f \n", medicalTax);


    printf("Net pay is $%.2f \n", netPay);


    return 0;
} ///// END MAIN()




