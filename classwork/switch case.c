#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Factorial Function
int factorial(int n) {
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {

    int ch;
    float num1, num2, result;

    printf("Welcome:\n");

    printf("Please enter Number 1: ");
    scanf("%f", &num1);

    printf("Please enter Number 2: ");
    scanf("%f", &num2);

    printf("\nPress-\n");
    printf("1 for add\n2 for sub\n3 for mul\n4 for div\n");
    printf("5 for power\n6 for factorial\n7 for exit\n");

    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch) {

        case 1:
            result = num1 + num2;
            printf("Sum = %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Difference = %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Multiplication = %.2f\n", result);
            break;

        case 4:
            if (num2 == 0)
                printf("Error: Division by zero!\n");
            else {
                result = num1 / num2;
                printf("Division = %.2f\n", result);
            }
            break;

        case 5:
            result = pow(num1, num2);
            printf("Power = %.2f\n", result);
            break;

        case 6: {
            int n1 = (int)num1;
            int n2 = (int)num2;

            printf("Factorial of %d = %d\n", n1, factorial(n1));
            printf("Factorial of %d = %d\n", n2, factorial(n2));
            break;
        }

        case 7:
            exit(0);

        default:
            printf("Invalid choice!\n");
    }

    printf("\nThank you for using our services ");
    return 0;
}
