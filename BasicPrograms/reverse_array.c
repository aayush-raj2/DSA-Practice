/*Logic: Swap the first and last elements, then move inward until the array is reversed.
Time Complexity: O(n)
Space Complexity: O(1)
Example:
Enter number of elements: 5
Enter 5 elements: 1 2 3 4 5
Reversed array: 5 4 3 2 1*/

#include <stdio.h>

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1, temp;

    while (start < end) {
        // Swap elements at start and end
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
