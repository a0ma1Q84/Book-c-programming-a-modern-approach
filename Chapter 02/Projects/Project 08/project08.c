/********************************************************************
 * Filename: [project08.c]                                          *
 * Author: [a0ma1Q84]                                               *
 * Date: [October 19 2023]                                          *
 *                                                                  *
 * Description:                                                     *
 * This file is a solution to project 08, Chapter 2 from            *
 * "C Programming: A Modern Approach, Second Edition" by K. N. King *
 *                                                                  *
 * Note:                                                            *
 * This solution is solely developed for educational purposes and   *
 * should not be distributed or used for any other purpose.         *
 *******************************************************************/

#include <stdio.h>

int main(void) {
     
    double balance = 0.0, 
           annualInterestRate = 0.0,
           monthlyInterestRate = 0.0,
           monthlyPayment = 0.0, 
           monthlyInterest = 0.0;

    // Prompt user for input
    printf("Enter amount of loan: ");
    scanf("%lf", &balance);

    printf("Enter interest rate: ");
    scanf("%lf", &annualInterestRate);

    printf("Enter monthly payment: ");
    scanf("%lf", &monthlyPayment);

    // Convert annual interest rate to monthly and then to fraction
    monthlyInterestRate = annualInterestRate / 12.0 / 100.0;

    // Compute balance after first payment
    balance = balance - monthlyPayment + monthlyInterest;
    printf("Balance remaining after first payment: %.2f\n", balance);

    // Compute balance after second payment
    balance = balance - monthlyPayment + monthlyInterest;
    printf("Balance remaining after second payment: %.2f\n", balance);

    // Compute balance after third payment
    balance = balance - monthlyPayment + monthlyInterest;
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}