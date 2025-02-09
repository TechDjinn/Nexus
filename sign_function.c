/*
SIGN FUNCTION
Assign the respective sign for a value.
-1 for negative values, 0 for a value of zero, and 1 for positive values.

Created:        2025-02-09
Last modified:  2025-02-09
Author:         Christofer Sundström
*/

#include <stdio.h>

// Function prototype.
int sign(const int value);

int main(void)
{
    // Array of test values.
    int values[] = {-124, -12, -5, 0, 0, 8, 26, 136};

    // Use the sign-function on each value.
    for ( int i = 0; i < 8; i++ ) {
        printf("Value: %4i | Sign: %2i\n", values[i], sign(values[i]));
    }

    return 0;
}

int sign(const int value)
{
    // Assign the respective sign for 'value'.
    return (value < 0) ? -1 : (value == 0) ? 0 : 1;
}