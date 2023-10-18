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
* Q: Write a program that declares several int and float variables -without initializing them-
* and then prints their values. Is there any pattern to the values ? 
*/

#include <stdio.h>

int main(void) {
    
    int int1, int2, int3;
    float float1, float2, float3;

    printf("Values of int variables:\n");
    printf("int1: %d\n", int1);
    printf("int2: %d\n", int2);
    printf("int3: %d\n", int3);

    printf("\nValues of float variables:\n");
    printf("float1: %f\n", float1);
    printf("float2: %f\n", float2);
    printf("float3: %f\n", float3);

  return 0;
}

/*
* A: No, there isn't a guaranteed pattern to these values, as they depend on the current state of memory.
* When you run the above code, you may see random values for the uninitialized variables. 
*/