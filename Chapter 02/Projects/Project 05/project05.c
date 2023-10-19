/********************************************************************
 * Filename: [project05.c]                                          *
 * Author: [a0ma1Q84]                                               *
 * Date: [October 18 2023]                                          *
 *                                                                  *
 * Description:                                                     *
 * This file is a solution to project 05, Chapter 2 from            *
 * "C Programming: A Modern Approach, Second Edition" by K. N. King *
 *                                                                  *
 * Note:                                                            *
 * This solution is solely developed for educational purposes and   *
 * should not be distributed or used for any other purpose.         *
 *******************************************************************/

#include <stdio.h>

int main(void) 
{
    double x = 0.0, result = 0.0;

    printf("Enter a value for x: ");
    scanf("%lf", &x);

    /* Calculate the value of the polynomial */
    result = 
    3 * x * x * x * x * x +
    2 * x * x * x * x -
    5 * x * x * x -
    x * x +
    7 * x - 
    6;

    printf("Result is: %.2lf \n", result);
  
    return 0;
}