#include <stdio.h>

int main(void) {

     // Variable Declarations for integer data type
    int num1, denom1, num2, denom2, result_num, result_denom;

    // Displays on terminal the printf and asks for a value from the User
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    // Formula to add fractions
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    // Final print statement showing the string then the values of the variable result_num and result_denom
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
    }
