# 🔗 Pointers in C

A **pointer** is a special variable that stores the **address of another variable**, not the actual data.  
They are essential in C programming for:

- **Indirect access** of data  
- **Dynamic memory allocation** (Heap usage)  
- **Function parameter passing**  
- Accessing **system resources** (like keyboard, monitor, etc.)  

---

## 🟦 Example 1: Basic Pointer
See the code: [`basic_pointer.c`](basic_pointer.c)

### Explanation
- `int a = 10;` → normal data variable.  
- `int *p;` → pointer declaration (stores an address).  
- `p = &a;` → assigns address of `a` to pointer `p`.  
- `*p` → dereferencing pointer, i.e., accessing the value stored at the address.  

---

## 🟦 Example 2: Accessing Heap Memory
See the code: [`heap_memory.c`](heap_memory.c)

### Explanation
- `malloc()` allocates memory at runtime (on the heap).  
- Pointer stores the starting address of allocated block.  
- Always use `free()` to release memory after use.  

---

## 🚀 How to Run
```bash
gcc basic_pointer.c -o basic_pointer
./basic_pointer

gcc heap_memory.c -o heap_memory
./heap_memory
