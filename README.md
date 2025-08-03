# Counting Sort in C

This project implements the **Counting Sort** algorithm in C, which is an efficient, non-comparative sorting algorithm for integers within a known range.

---

## ✅ Features
- Implements `findMax` to determine the largest element in the array.
- Dynamically allocates memory for the count array.
- Sorts integers in ascending order.
- Handles duplicate values.
- Includes a demo `main` function with example input.

---

## 📂 How It Works
1. **Find the maximum value** in the array to know the size of the count array.
2. **Allocate a count array** of size `max + 1` and initialize all values to 0.
3. **Count occurrences** of each number in the input array.
4. **Reconstruct the array** in sorted order by iterating through the count array.
5. **Free allocated memory** to prevent memory leaks.

---

## ▶️ Usage

### **Compile the program:**
```bash
gcc counting_sort.c -o counting_sort
