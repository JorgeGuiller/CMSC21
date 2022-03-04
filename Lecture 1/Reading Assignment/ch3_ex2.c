#include <stdio.h>

int main(void) {

    // Variable Declarations for integer data type
    int i;
    // Variable Declarations for float data type
    float x;

    // Assigned Values to Variables
    i = 40;
    x = 839.21f;

    //  Print Statement
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
    }
