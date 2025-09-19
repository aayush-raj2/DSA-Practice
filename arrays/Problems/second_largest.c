#include <stdio.h>
#include <limits.h>

/*
 * Program: Find Second Largest Element in Array
 * Author: Aayush Raj
 */

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int first = INT_MIN, second = INT_MIN;

    // Traverse array and track largest & second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        printf("No second largest element\n");
    else
        printf("Second largest element is %d\n", second);

    return 0;
}
