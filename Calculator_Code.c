// Test 1
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Welcome to the Simple Calculator!\n");
    printf("Select an operation (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid operator! Please restart the program.\n");
    }

    return 0;
}
h