#include <stdio.h>

/*
    Program: Rotate an Array by K positions (In-place, O(1) space)

    Approach:
        - Reverse the entire array
        - Reverse the first k elements
        - Reverse the remaining n-k elements

    Example:
        Input:  arr = [1,2,3,4,5,6,7], k = 2
        Output: arr = [6,7,1,2,3,4,5]

    Time Complexity: O(n)
    Space Complexity: O(1)   (no extra array used)
*/

/* Helper function to reverse part of the array */
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/* Rotate array to the right by k positions */
void rotateArray(int arr[], int n, int k) {
    k = k % n;   // Handle case when k > n

    // Step 1: Reverse whole array
    reverse(arr, 0, n - 1);

    // Step 2: Reverse first k elements
    reverse(arr, 0, k - 1);

    // Step 3: Reverse remaining n-k elements
    reverse(arr, k, n - 1);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    rotateArray(arr, n, k);

    printf("Rotated Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
