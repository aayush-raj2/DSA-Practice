#include <stdio.h>

// Program to count frequency of each element in an array
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], freq[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // initialize frequency array
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] == 0) continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // mark as visited
            }
        }
        freq[i] = count;
    }

    printf("\nElement | Frequency\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0)
            printf("%d   -->   %d\n", arr[i], freq[i]);
    }

    return 0;
}
