#include <stdio.h>

int main() {
    double num1, num2;
    double sum, difference, product, quotient;

    // Prompt the user for the first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Prompt the user for the second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Check for division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        printf("Division by zero is not allowed.\n");
        return 1; // Exit the program with an error code
    }

    // Display the results
    printf("Sum: %.2lf\n", sum);
    printf("Difference: %.2lf\n", difference);
    printf("Product: %.2lf\n", product);
    printf("Quotient: %.2lf\n", quotient);

    return 0;
}
