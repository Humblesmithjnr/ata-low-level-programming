// This program prints age, height and grade in C.

/*
C is still important today because it’s fast, efficient, 
and forms the foundation for many modern languages like C++, Java, and Python.
*/


#include <stdio.h>

int main(void)
{

    int age = 20;
    float height = 5.9;
    char grade = 'A';


    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}