// This program prints a greeting message in C.

/*
C is still important today because it’s fast, efficient, 
and forms the foundation for many modern languages like C++, Java, and Python.
*/

#include <stdio.h>

int main(void)
{
    int number = 25;      // int = keyword, number = identifier, = = operator, 25 = literal, ; = punctuation
    float value = 15.7;   // float = keyword, value = identifier, = = operator, 15.7 = literal, ; = punctuation
    char letter = 'A';    // char = keyword, letter = identifier, = = operator, 'A' = literal, ; = punctuation

    printf("Integer: %d\n", number);
    printf("Float: %.1f\n", value);
    printf("Char: %c\n", letter);

    return 0;
}

