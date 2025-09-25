#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // divisible → not prime
    }
    return 1; // prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime Number\n", num);
    else
        printf("%d is NOT a Prime Number\n", num);

    return 0;
}

Output:
Enter a number: 13
13 is a Prime Number
