// This program prints age, height and grade in C.

/*
C is still important today because it’s fast, efficient, 
and forms the foundation for many modern languages like C++, Java, and Python.
*/

#include <stdio.h>

void incrementCounter()
{
    static int counter = 0;   // static variable retains its value between calls
    counter++;
    printf("Counter: %d\n", counter);
}

int main(void)
{
    incrementCounter();  // First call → counter becomes 1
    incrementCounter();  // Second call → counter becomes 2
    incrementCounter();  // Third call → counter becomes 3

    return 0;
}
