#include <stdio.h>

int main() {
    int arr[] = {10, 5, 20, 8, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxVal = arr[0], minVal = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) maxVal = arr[i];
        if(arr[i] < minVal) minVal = arr[i];
    }

    printf("Maximum: %d\n", maxVal);
    printf("Minimum: %d\n", minVal);
    return 0;
}
