/********************************************************************
 * Filename: [ch02ex01.c]                                           *
 * Author: [a0ma1Q84]                                               *
 * Date: [October 13, 2023]                                         *
 *                                                                  *
 * Description:                                                     *
 * This file is a solution to exercise 01, Section 2.1 from         *
 * "C Programming: A Modern Approach, Second Edition" by K. N. King *
 *                                                                  *
 * Note:                                                            *
 * This solution is solely developed for educational purposes and   *
 * should not be distributed for commercial use.                    *
 *******************************************************************/

/*
* Q: Create and run Kernighan and Ritchie's famous "hello, world" program.
* Do you get any warning message from the compiler ? If so, what's needed to make it go away ? 
*
* A: The error message: "warning: control reaches end of non-void function" will occur if you compile the program using the C89 standard. 
To eliminate this warning, insert 'return 0;' at the conclusion of the main() function.
*/

#include <stdio.h>

int main(void)
{
    printf("Hello, world!\n");
    return 0;
}

