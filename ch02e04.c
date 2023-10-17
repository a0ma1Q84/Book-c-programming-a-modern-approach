/********************************************************************
 * Filename: [ch02ex04.c]                                           *
 * Author: [a0ma1Q84]                                               *
 * Date: [October 17, 2023]                                         *
 *                                                                  *
 * Description:                                                     *
 * This file is a solution to exercise 04, Section 2.4 from         *
 * "C Programming: A Modern Approach, Second Edition" by K. N. King *
 *                                                                  *
 * Note:                                                            *
 * This solution is solely developed for educational purposes and   *
 * should not be distributed for commercial use.                    *
 *******************************************************************/

/*
* Q: Condense the dweight.c program by : 
* (1) replacing the assignments to height, length and width with initializers
* (2) removing the weight variable, instead calculating (volume + 165) / 166 with the last printf.
*/


#include <stdio.h>

int main(void) {
  
  int height = 8, length = 12, width = 10;
  int volume;
  
  volume = height * length * width;
    
  printf("Dimensions: %dx%dx%d\n", height, length, width);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
  
  return 0;
}