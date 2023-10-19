/********************************************************************
 * Filename: [project07.c]                                          *
 * Author: [a0ma1Q84]                                               *
 * Date: [October 19 2023]                                          *
 *                                                                  *
 * Description:                                                     *
 * This file is a solution to project 07, Chapter 2 from            *
 * "C Programming: A Modern Approach, Second Edition" by K. N. King *
 *                                                                  *
 * Note:                                                            *
 * This solution is solely developed for educational purposes and   *
 * should not be distributed or used for any other purpose.         *
 *******************************************************************/

#include <stdio.h>

#define BILL_20 20
#define BILL_10 10
#define BILL_05 5
#define BILL_01 1

int main(void) 
{
    int amount, twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    twenties = amount / BILL_20;
    amount = amount % 20;

    tens = amount / BILL_10;
    amount = amount % 10;

    fives = amount / BILL_05;
    ones = amount % 5;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills : %d\n", fives);
    printf("$1 bills : %d\n", ones);

    return 0;
}