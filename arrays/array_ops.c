#include <stdio.h>

// print array
void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");
}

// linear search
int linearSearch(int A[], int n, int key) {
    for (int i = 0; i < n; i++) if (A[i] == key) return i;
    return -1;
}

// insert at index
int insertAt(int A[], int *n, int capacity, int index, int value) {
    if (*n >= capacity || index < 0 || index > *n) return 0;
    for (int i = *n; i > index; i--) A[i] = A[i-1];
    A[index] = value;
    (*n)++;
    return 1;
}

// delete at index
int deleteAt(int A[], int *n, int index) {
    if (index < 0 || index >= *n) return 0;
    for (int i = index; i < *n - 1; i++) A[i] = A[i+1];
    (*n)--;
    return 1;
}

int main() {
    int capacity = 10;
    int A[10] = {2, 9, 6, 8, 10};
    int n = 5;

    printArray(A, n);

    insertAt(A, &n, capacity, 2, 99);
    printArray(A, n);

    deleteAt(A, &n, 4);
    printArray(A, n);

    int key = 8;
    int pos = linearSearch(A, n, key);
    if (pos != -1) printf("%d found at index %d\n", key, pos);
    else printf("%d not found\n", key);

    return 0;
}
