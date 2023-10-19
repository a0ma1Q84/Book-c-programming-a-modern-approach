/********************************************************************
 * Filename: [project04.c]                                          *
 * Author: [a0ma1Q84]                                               *
 * Date: [October 18 2023]                                          *
 *                                                                  *
 * Description:                                                     *
 * This file is a solution to project 04, Chapter 2 from            *
 * "C Programming: A Modern Approach, Second Edition" by K. N. King *
 *                                                                  *
 * Note:                                                            *
 * This solution is solely developed for educational purposes and   *
 * should not be distributed or used for any other purpose.         *
 *******************************************************************/

#include <stdio.h>

#define TAX_RATE 0.05f

int main(void) 
{   
  float originalAmount, taxAmount, totalAmount;

  /* Prompt the user to enter an amount */
  printf("Enter an amount : ");
  scanf("%f", &originalAmount);

 /* Calculate the tax based on the user's input and add it to the original amount */
  taxAmount = ( originalAmount * TAX_RATE );
  totalAmount = ( originalAmount + taxAmount );

  printf("With tax added : %.2f \n", totalAmount);
  return 0;
}