/*
C is still important today because it’s fast, efficient, 
and forms the foundation for many modern languages like C++, Java, and Python.
*/
#include <stdio.h>

// Global variable
int counter = 5;

// Function to return global counter
int get_global_counter(void)
{
    return counter;
}

int main(void)
{
    // Local variable
    int counter = 10;

    printf("Global counter: %d\n", get_global_counter());
    printf("Local counter: %d\n", counter);

    return 0;
}
