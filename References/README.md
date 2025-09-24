# 🔗 References in C++

A **reference** is an alias for an existing variable. It acts as another name for the same memory location.  

---

## 🟦 Example: Reference Variable
See the code: [`reference_example.cpp`](reference_example.cpp)
It can also be done in c but c does not support references directly.
See the code: [`swap_using_pointers.c`](swap_using_pointers.c)

### Explanation
- `int &r = a;` → creates reference `r` that refers to variable `a`.  
- Any operation done on `r` is directly reflected in `a`.  
- Useful for parameter passing and small functions.  

---

## 🚀 How to Run
```bash
g++ reference_example.cpp -o reference
./reference
