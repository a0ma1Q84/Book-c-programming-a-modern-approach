/********************************************************************
 * Filename: [project03.c]                                          *
 * Author: [a0ma1Q84]                                               *
 * Date: [October 18 2023]                                          *
 *                                                                  *
 * Description:                                                     *
 * This file is a solution to project 03, Chapter 2 from            *
 * "C Programming: A Modern Approach, Second Edition" by K. N. King *
 *                                                                  *
 * Note:                                                            *
 * This solution is solely developed for educational purposes and   *
 * should not be distributed or used for any other purpose.         *
 *******************************************************************/

#include <stdio.h>

#define PI 3.14159f
#define SPHERE_VOLUME_FACTOR (4.0f / 3.0f)

int main(void)
{   
  /* Declare variables for the radius, volume, and the radius cubed */
  float radius, volume, cubed_radius;

  /* Prompt the user to enter the radius of the sphere */
  printf("Enter radius of the sphere: ");
  scanf("%f", &radius);
 
  cubed_radius = radius * radius * radius;

  volume = ( SPHERE_VOLUME_FACTOR * PI * cubed_radius);
  printf("The volume of the sphere is %.2f cubic units\n", volume);

  return 0;
}