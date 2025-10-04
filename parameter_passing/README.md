# 🔹 Parameter Passing in Functions  

This folder demonstrates different **parameter passing mechanisms** in C and C++.  

---

## 📂 Programs Included  
1. **Pass by Value (C)** – Does not modify original values.  
2. **Call by Address (C)** – Uses pointers to modify actual parameters.  
3. **Call by Reference (C++)** – Uses references to modify values (C++ only).  
4. **Arrays as Parameters (C)** – Demonstrates passing arrays (always by address).  
5. **Structures as Parameters (C/C++)** – Passing user-defined types (by value, address, or reference).

---

## ✅ Key Points  
- **Pass by Value** → Function gets a copy → changes don’t affect original values.  
- **Call by Address** → Function gets memory addresses → changes reflect in caller.  
- **Call by Reference** → C++ feature → references act as aliases (simpler than pointers).  
- **Arrays as Parameters** → Arrays in C are **always passed by address** (like pointers).  
- **Structures as Parameters** → Can be passed *by value*, *by address*, or *by reference (C++)*.  

---

## 📊 Example Outputs  
- **Pass by Value:**  
Before swap: a=10, b=20
After swap (Pass by Value): a=10, b=20


- **Call by Address:**  
Before swap: a=10, b=20
After swap (Call by Address): a=20, b=10


- **Call by Reference (C++):**  
Before swap: a=10, b=20
After swap (Call by Reference): a=20, b=10


- **Arrays as Parameters:**  
Array elements: 2 4 6 8 10


**Structures as Parameters:**
Area (by value): 50
Updated Length: 20
---

## 🚀 How to Run  
```bash
# Pass by Value
gcc pass_by_value.c -o value
./value

# Call by Address
gcc call_by_address.c -o address
./address

# Arrays as Parameters
gcc arrays_as_parameters.c -o arrays
./arrays

# Structures as Parameters
gcc struct_as_parameter.c -o struct
./struct

# Call by Reference (C++ only)
g++ call_by_reference.cpp -o reference
./reference
