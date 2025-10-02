# 🔹 Parameter Passing in Functions

This folder demonstrates different **parameter passing mechanisms** in C and C++.

---

## 📂 Programs Included
1. **Pass by Value (C)** – Does not modify original values.  
2. **Call by Address (C)** – Uses pointers to modify actual parameters.  
3. **Call by Reference (C++)** – Uses references to modify values (C++ only).  

---

## ✅ Key Points
- **Pass by Value** → Copies values, changes don’t affect originals.  
- **Call by Address** → Uses pointers, changes reflect in caller.  
- **Call by Reference** → C++ feature, simpler than pointers.  

---

## 🚀 How to Run
```bash
gcc pass_by_value.c -o value
./value

gcc call_by_address.c -o address
./address

g++ call_by_reference.cpp -o reference
./reference
