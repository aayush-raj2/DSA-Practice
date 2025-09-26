#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;  // Base case
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d = %lld\n", num, result);
    }

    return 0;
}
