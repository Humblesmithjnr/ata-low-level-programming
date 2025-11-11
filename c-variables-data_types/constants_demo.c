// This program prints a greeting message in C.

/*
C is still important today because it’s fast, efficient, 
and forms the foundation for many modern languages like C++, Java, and Python.
*/


#include <stdio.h>

#define PI_DEFINE 3.14   // Using #define preprocessor directive

int main(void)
{
    const float PI_CONST = 3.14;   // Using const keyword

    printf("PI using #define: %.2f\n", PI_DEFINE);
    printf("PI using const: %.2f\n", PI_CONST);

    return 0;
}
