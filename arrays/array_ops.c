#include <stdio.h>

/*
    Program: Array Operations in C
    Functions implemented:
        1. printArray – Print elements of an array
        2. linearSearch – Search for a key in the array
        3. insertAt – Insert a value at a given index
        4. deleteAt – Delete element at a given index

    Example:
        Initial: 2 9 6 8 10
        After Insert 99 at index 2: 2 9 99 6 8 10
        After Delete element at index 4: 2 9 99 6 10
        Search key 8: Not Found
*/

/* Prints the array elements */
void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");
}

/* 
   Linear Search
   Returns index if key is found, otherwise -1
   Time Complexity: O(n)
*/
int linearSearch(int A[], int n, int key) {
    for (int i = 0; i < n; i++) 
        if (A[i] == key) return i;
    return -1;
}

/* 
   Insert a value at a given index
   Shifts elements to the right
   Returns 1 if successful, 0 if capacity is full or index invalid
   Time Complexity: O(n)
*/
int insertAt(int A[], int *n, int capacity, int index, int value) {
    if (*n >= capacity || index < 0 || index > *n) return 0;
    for (int i = *n; i > index; i--) A[i] = A[i-1];
    A[index] = value;
    (*n)++;
    return 1;
}

/* 
   Delete element at a given index
   Shifts elements to the left
   Returns 1 if successful, 0 if index invalid
   Time Complexity: O(n)
*/
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

    printf("Initial Array: ");
    printArray(A, n);

    printf("\nInsert 99 at index 2:\n");
    insertAt(A, &n, capacity, 2, 99);
    printArray(A, n);

    printf("\nDelete element at index 4:\n");
    deleteAt(A, &n, 4);
    printArray(A, n);

    int key = 8;
    printf("\nSearching for %d:\n", key);
    int pos = linearSearch(A, n, key);
    if (pos != -1) printf("%d found at index %d\n", key, pos);
    else printf("%d not found\n", key);

    return 0;
}
