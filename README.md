# Experiment 21 - Sorting Techniques (Bubble Sort, Quick Sort, and Selection Sort)

- **Name:** Harshil Nagori
- **Class:** ENTC A2
- **PRN:** 24070123046   
- **Title:** Implementation of Bubble Sort, Quick Sort, and Selection Sort using C++  

---

## Aim
To implement and compare **Bubble Sort, Quick Sort, and Selection Sort** algorithms in C++ and analyze their efficiency.

---

## Objectives
1. To understand the concept of sorting in arrays.  
2. To implement **Bubble Sort** and study its iterative swapping mechanism.  
3. To implement **Selection Sort** and study its selection-based mechanism.  
4. To implement **Quick Sort** and study its divide-and-conquer mechanism.  
5. To analyze the **time and space complexities** of all three techniques.  
6. To compare their performance and discuss suitable applications.  

---

## Theory

### What is Sorting?
Sorting is the process of arranging elements of a dataset in a specific order (ascending or descending). Efficient sorting is critical in computer science, as it improves search performance and organizes data for further processing.  

There are multiple sorting algorithms, each with different efficiencies, techniques, and use cases.

---

### 1. Bubble Sort
- Simplest comparison-based sorting algorithm.  
- Repeatedly compares adjacent elements and swaps them if they are in the wrong order.  
- After each pass, the largest element "bubbles up" to its correct position.  
- Optimized version includes a **swapped flag** to stop early if no swaps occur.  
- **Time Complexity:**  
  - Best Case: O(n) (already sorted array)  
  - Worst Case: O(n²)  
  - Average Case: O(n²)  
- **Space Complexity:** O(1)  

---

### 2. Selection Sort
- Finds the **minimum element** from the unsorted part of the array and places it at the beginning.  
- Repeats this process until the entire array is sorted.  
- Performs fewer swaps than bubble sort but still takes O(n²) comparisons.  
- **Time Complexity:**  
  - Best Case: O(n²)  
  - Worst Case: O(n²)  
  - Average Case: O(n²)  
- **Space Complexity:** O(1)  

---

### 3. Quick Sort
- A highly efficient **divide and conquer** sorting algorithm.  
- Selects a **pivot element**, partitions the array such that all elements smaller than pivot go to the left and greater elements go to the right.  
- Recursively sorts the left and right subarrays.  
- **Time Complexity:**  
  - Best Case: O(n log n)  
  - Worst Case: O(n²) (when pivot is always smallest/largest)  
  - Average Case: O(n log n)  
- **Space Complexity:** O(log n) (due to recursion stack)  
- **Advantage:** Much faster than Bubble and Selection sort for large datasets.  

---

## Comparison Table

| Feature              | Bubble Sort                | Selection Sort              | Quick Sort                  |
|----------------------|----------------------------|-----------------------------|-----------------------------|
| Approach             | Compare & swap repeatedly | Select min & place in order | Divide and conquer          |
| Best Case            | O(n)                       | O(n²)                       | O(n log n)                  |
| Worst Case           | O(n²)                      | O(n²)                       | O(n²)                       |
| Average Case         | O(n²)                      | O(n²)                       | O(n log n)                  |
| Space Complexity     | O(1)                       | O(1)                        | O(log n)                    |
| Stability            | Stable                     | Not stable                  | Not stable (depends on impl)|
| Efficiency           | Poor for large datasets    | Slightly better than bubble | Highly efficient for large  |

---
## Concepts Used
- **Arrays:** Storing input elements.  
- **Sorting Algorithms:** Bubble, Selection, Quick.  
- **Functions:** Modular implementation (bubbleSort, selectionSort, quickSort, partition).  
- **Recursion:** Used in Quick Sort.  
- **Complexity Analysis:** Best, worst, and average cases.  


## Algorithms

## 1.Program Summary

### Bubble Sort Program
- Uses repeated swapping of adjacent elements.  
- Stops early if no swaps are needed in a pass.  
- Simple but inefficient for large datasets.
-  
### Algorithm for Bubble Sort
1. Input number of elements `n`.  
2. Input array elements.  
3. Repeat `n-1` passes:  
   - Compare adjacent elements.  
   - If `arr[j] > arr[j+1]`, swap them.  
   - Use a flag to stop if no swaps occurred.  
4. Print the sorted array.  

---

## 2. Program Summary


### Selection Sort Program
- Finds the minimum element and swaps it into position.  
- Reduces swaps compared to bubble sort.  
- Still requires O(n²) comparisons.  
 
### Algorithm for Selection Sort
1. Input number of elements `n`.  
2. Input array elements.  
3. For each index `i = 0 to n-1`:  
   - Find the index of the smallest element in the unsorted part.  
   - Swap it with the element at index `i`.  
4. Print the sorted array.  

---
## 3. Program Summary


### Quick Sort Program
- Implements **divide and conquer**.  
- Partitions array based on pivot.  
- Very efficient for large datasets with average O(n log n).  


### Algorithm for Quick Sort
1. Input number of elements `n`.  
2. Input array elements.  
3. Choose a pivot element (last element).  
4. Partition array into two halves:  
   - Left half: elements ≤ pivot.  
   - Right half: elements > pivot.  
5. Recursively apply quick sort to left and right halves.  
6. Print the sorted array.  

---
## Conclusion
- All three sorting algorithms were successfully implemented.  
- **Bubble Sort** is easiest to understand but inefficient.  
- **Selection Sort** reduces swaps but still has O(n²) complexity.  
- **Quick Sort** is the most efficient for large datasets with average O(n log n).  
- This experiment highlighted the trade-off between **simplicity and efficiency** in sorting algorithms.  
- Practical takeaway: For large datasets, **Quick Sort** is preferred, while Bubble/Selection are mainly for learning and small datasets.  

---
