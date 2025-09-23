# 🎯 Pointer to Structure in C

A **pointer to a structure** allows us to access and manipulate structure members indirectly using memory addresses.  

- `.` operator → used with structure variables.  
- `->` operator → used with structure pointers.  
- `(*p).member` is equivalent to `p->member`.  

---

## 🟦 Example 1: Pointer to an Existing Structure
See the code: [`pointer_existing_struct.c`](pointer_existing_struct.c)

### Explanation
- Create a structure variable `r`.  
- Assign its address to a pointer `p`.  
- Access members using both `.` and `->`.  

---

## 🟦 Example 2: Pointer with Dynamic Allocation
See the code: [`pointer_dynamic_struct.c`](pointer_dynamic_struct.c)

### Explanation
- Use `malloc()` to create a structure object in the **heap**.  
- Use a pointer to assign values and access members.  
- Always free heap memory after use.  

---

## 🚀 How to Run
```bash
gcc pointer_existing_struct.c -o existing
./existing

gcc pointer_dynamic_struct.c -o dynamic
./dynamic
