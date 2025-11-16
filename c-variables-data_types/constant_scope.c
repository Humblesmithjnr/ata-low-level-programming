#include <stdio.h>

int main(void)
{
    const int number = 50;   // const = keyword that makes the variable read-only

    number = 100;  // This will cause a compilation error because 'number' is const

    printf("Number: %d\n", number);

    return 0;
}

/*
Error explanation:
Trying to modify a const variable gives an error like:
“error: read-only variable is not assignable”
because const variables cannot be changed after initialization.
*/
