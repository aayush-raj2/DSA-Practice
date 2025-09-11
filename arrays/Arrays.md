# Arrays — DSA Notes

## What is an Array?
An **array** is a collection of elements of the same data type stored in **contiguous memory locations**.

- Fixed size (decided at compile time for static arrays in C)
- Indexing starts from `0`
- Elements can be accessed using their index

---

## Declaration (C)
int A[5];
int B[5] = {2, 9, 6, 8, 10};

## Common Operations

- Traversal — visit every element
- Insertion — add an element (shift right if needed)
- Deletion — remove an element (shift left)
- Searching — linear or binary search
- Updating — modify an element at given index

## Time Complexity (Static Array)
### Operation	Complexity
- Access by index	O(1)
- Traversal	O(n)
- Insertion (end)	O(1)
- Insertion (mid)	O(n)
- Deletion (mid)	O(n)
- Search (linear)	O(n)
- Search (binary)	O(log n)
