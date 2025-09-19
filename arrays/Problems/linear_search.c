#include <stdio.h>

/*
 * Program: Search an Element in Array (Linear Search)
 * Author: Aayush Raj
 */

int main() {
    int arr[] = {15, 7, 9, 21, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 21, found = -1;

    // Linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i; // Save index where element found
            break;
        }
    }

    if (found != -1)
        printf("Element %d found at index %d\n", key, found);
    else
        printf("Element %d not found\n", key);

    return 0;
}
