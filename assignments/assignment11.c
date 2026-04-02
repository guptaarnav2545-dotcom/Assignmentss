#include <stdio.h>
#include <math.h>

// Factorial
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Prime check
int isprime(int n) {
    if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Square root
    if (num >= 0)
        printf("Square root of %d is %.2f\n", num, sqrt(num));
    else
        printf("Square root not defined for negative numbers\n");

    // Square
    printf("Square of %d is %.0f\n", num, pow(num, 2));

    // Cube
    printf("Cube of %d is %.0f\n", num, pow(num, 3));

    // Prime check
    if (isprime(num))
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

    // Factorial
    if (num < 0)
        printf("Factorial not defined for negative numbers\n");
    else
        printf("Factorial of %d is %lld\n", num, factorial(num));

    // Prime factors (with repetition)
    printf("Prime factors of %d are: ", num);
    int temp = num;

    for (int i = 2; i <= temp; i++) {
        while (temp % i == 0 && isprime(i)) {
            printf("%d ", i);
            temp /= i;
        }
    }
    printf("\n");

    return 0;
}