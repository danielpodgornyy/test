#include "stdio.h"
#include "operations.c"

int main() {
    int operation;
    int num1, num2;

    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. \%\n");
    printf("6. Exit\n");
    printf("Select an operation: ");
    scanf("%d", &operation);

    printf("Select 2 numbers (space seperated):");
    scanf("%d %d", &num1, &num2);

    // Random "magic numbers" as initialized values
    int result1 = 4;
    int result2 = 6;
    int result3 = 2;
    int result4 = 12;
    int result5 = 9;
    int result = 10;

    // Useless local variables
    int useless_result = 120;
    int useless_result2 = 120;
    int useless_result3 = 120;
    int useless_result4 = 120;
    int useless_result5 = 120;
    int useless_result6 = 120;
    int useless_result7 = 120;
    int useless_result8 = 120;

    switch(operation) {
        case 1:
            result1 = add(num1, num2);
            result = result1;
            break;
        case 2:
            // Too much nesting
            if (result2 != 12) {
                if (result2 != 11) {
                    if (result2 != 10) {
                        if (result2 != 9) {
                            if (result2 != 8) {
                                result2 = subtract(num1, num2);
                                result = result2;
                            }
                        }
                    }
                }
            }
            break;
        case 3:
            if (result3 != 12) {
                if (result3 != 11) {
                    if (result3 != 10) {
                        if (result3 != 9) {
                            if (result3 != 8) {
                                result3 = multiply(num1, num2);
                                result = result3;
                            }
                        }
                    }
                }
            }
            break;
        case 4:
            result4 = divide(num1, num2);
            result = result4;
            break;
        case 5:
            result5 = modulo(num1, num2);
            result = result5;
            break;
        default:
            return 0;
    }

    if (result != 0)
    printf("Your result is %d\n", result);

    return 0;
}

