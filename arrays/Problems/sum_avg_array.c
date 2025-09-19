#include <stdio.h>

/*
 * Program: Find Sum and Average of Array Elements
 * Author: Aayush Raj
 */

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    // Calculate sum of all elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average
    float avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
