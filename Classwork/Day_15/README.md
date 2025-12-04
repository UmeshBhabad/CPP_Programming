# 🧠 Day 15 — Storage Classes, Stack Behavior & Recursion in C/CPP

### 📚 What I Learned Today

---

## I. 🏷️ Storage Classes in C/C++
Studied different storage classes and how they control a variable’s **lifetime**, **scope**, and **visibility**:

### 🔹 `auto`
- Default storage class for local variables  
- Stored in **stack frame**  
- Lifetime: only during function execution  

### 🔹 `static`
- Retains value between multiple function calls  
- Stored in **data segment** (not stack)  
- Lifetime: entire program execution  
- Scope: remains local unless declared globally  

### 🔹 `register`
- Suggests storing variable in CPU register for faster access  
- Cannot take its address using `&`  
- Used for loop counters or frequently accessed data  

### 🔹 `extern`
- Declares a global variable defined in another file  
- Used in multi-file programs  
- Scope: global  
- Lifetime: entire program execution  

---

## II. 🧩 Variable Behavior on Stack Frame  
Understanding difference between **auto** and **static** inside a function:

### ✔ Auto Variables  
- Created when function is called  
- Destroyed when function ends  
- New memory allocated every time

### ✔ Static Variables  
- Created only once  
- Value is preserved across multiple function calls  
- Helps track states inside recursive functions or loops  

---

## III. 🔁 Concept: Problems on Recursion  
Practiced recursion problems and understood:

- Base case & recursive case  
- Stack frame behavior for recursive calls  
- How each function call creates a new activation record  
- Problems solved:
  - Factorial  
  - Sum of digits  
  - Power of a number  
  - Counting digits  
  - Reverse number recursively  

Learned how recursion uses **stack memory**, how return values bubble up, and how infinite recursion occurs without a proper base case.

---

📅 **Focus of the Day:** Deep dive into storage classes, stack behavior, and recursion fundamentals to strengthen low-level understanding.
