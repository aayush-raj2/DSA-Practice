#include <stdio.h>
#include <math.h>

// Function to check if a number is Armstrong
int isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;

    // Count digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of powered digits
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number\n", num);
    else
        printf("%d is NOT an Armstrong Number\n", num);

    return 0;
}

Output:
Enter a number: 153
153 is an Armstrong Number
