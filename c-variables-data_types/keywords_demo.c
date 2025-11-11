#include <stdio.h>  // #include is a preprocessor directive — it tells the compiler to include standard input/output functions

// main - the main function
// description: Demonstrates the use of C keywords
// return: 0
int main(void)   // int = keyword (function returns an integer), void = keyword (no parameters)
{
    const char message[] = "Keywords are powerful";  
    // const = keyword (value cannot change)
    // char = keyword (data type for characters)
    // message = identifier (name of variable)
    // [] = array brackets
    // = = assignment operator
    // "Keywords are powerful" = string literal

    for (int i = 0; i < 1; i++)   // for = loop keyword, int = data type, i = variable, < = comparison operator, ++ = increment
    {
        if (1)   // if = keyword used for condition checking, 1 = means true
        {
            printf("%s\n", message);   // prints the message
        }
    }

    return 0;   // return = keyword that ends the function and returns a value (0 = success)
}

