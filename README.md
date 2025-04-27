# Dynamic Array in C

## 📋 Project Description

This project provides a **dynamic array (vector)** implementation in C.  
It is designed to manage collections of integers (`int`) with automatic resizing, efficient memory management, and common operations such as insertion, deletion, and search.

---

## 🚀 Features

- Create dynamic arrays with default or custom capacity
- Push elements to the end (`push_back`)
- Insert elements at any position (`insert`)
- Remove elements by index or value (`erase`, `erase_value`, `erase_all`)
- Find elements by value (`find`)
- Pop elements from the end (`pop_back`)
- Clear or shrink the array
- Print array contents
- Automatic memory management and resizing

---

## 🔧 Data Structures

- `vector` structure: Holds the data pointer (`mp`), current size (`msize`), and capacity (`mcap`).
- `hVector`: Typedef for pointer to `vector` structure.

```c
typedef struct tagVector
{
    DATATYPE* mp;
    size_t msize;
    size_t mcap;
} vector, *hVector;
```

**Note:**  
Ensure that `DynamicArray.h` and `my_utility.h` are included and properly linked.

---

## 📄 Functions

| Function | Description |
|-----------|-------------|
| `create_vector_with_default()` | Creates a dynamic array with default capacity |
| `create_vector_with_capacity(size)` | Creates a dynamic array with specified capacity |
| `push_back(hVector, value)` | Adds a value at the end |
| `insert(hVector, index, value)` | Inserts a value at the specified index |
| `pop_back(hVector)` | Removes the last element |
| `erase(hVector, index)` | Removes the element at the specified index |
| `erase_value(hVector, value)` | Removes the first occurrence of a value |
| `erase_all(hVector, value)` | Removes all occurrences of a value |
| `find(hVector, value)` | Finds the index of a value |
| `clear(hVector)` | Clears the array without changing capacity |
| `shrink(hVector)` | Shrinks capacity to current size |
| `destroy_vector(hVector)` | Frees all allocated memory |
| `print_vector(hVector)` | Prints the array contents |

---

## 📚 Requirements

- A C compiler compatible with the C99 standard
- Standard C libraries: `stdio.h`, `stdlib.h`, `string.h`, `stdint.h`, `stdbool.h`
- `my_utility.h` header file if used

---

## 📌 Notes

- When inserting or pushing new elements, the array automatically resizes by doubling its capacity if necessary.
- Always call `destroy_vector(hVector)` after using the vector to prevent memory leaks.

---

## 📈 Example Usage

```c
#include "DynamicArray.h"

    hVector handle = create_vector_with_default();

    for (int i = 0; i < 40; i++)
    {
        push_back(handle, i);
    }

    print_vector(handle);

    for (int i = 0; i < 25; i++)
    {
        push_back(handle, i * 10);
    }

    print_vector(handle);

    destroy_vector(handle);
```
