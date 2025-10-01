#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 17;
    if (isPrime(num))
        printf("%d is a Prime Number\n", num);
    else
        printf("%d is NOT a Prime Number\n", num);
    return 0;
}
