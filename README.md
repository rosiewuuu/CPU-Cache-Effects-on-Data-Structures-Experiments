# CPU Cache Effects on Data Structures - Experiments

## Introduction
In a quest to understand the impact of CPU Cache effects on the performance of data structures, we embarked on a journey through a series of experiments. This project primarily focuses on two distinct experiments aimed at unraveling the nuances of cache misses and data access times in different data structures, particularly arrays and linked lists.

## Experiments Conducted

### Experiment 1: Simple Demonstration of Cache Effects
- **Objective:** To compare the runtime of two loops accessing varying number of array elements while inducing roughly the same number of cache misses.
- **Methodology:** 
  - Implemented two loops with distinct access patterns but designed to cause similar cache miss rates.
  - Inserted 100,000 elements in the array.
- **Observations:**
  - The time span is predominantly influenced by cache misses rather than the number of operations.
  - Loop 1 and Loop 2 exhibited similar time spans despite Loop 2 having 16 times more operations than Loop 1.

### Experiment 2: List Traversal Time Comparison
- **Objective:** Compare the traversal times of a list implemented as an array, a simple linked list, and an unrolled linked list.
- **Methodology:**
  - Inserted the same 500,000 random integers into an array, a linked list, and an unrolled linked list across 12 runs.
  - Each run was initiated with different numbers.
- **Observations:**
  - Array traversal was the fastest due to hardware prefetching capabilities.
  - Unrolled linked list came next, followed by the standard linked list in terms of traversal time.
  - Pointers in linked lists inhibited hardware prefetching, leading to increased cache misses and thus, longer traversal times.
- **Results:**
  - array < unrolled LL < Linked List
## Setup and Execution
Ensure you have the necessary compilers and environment setup for C++.

## Compilation and Execution

The provided Makefile facilitates the compilation and execution process of the experiments. Here's how to utilize it:

### Compilation

1. To compile all experiments at once, use the following command:
    ```bash
    make all
    ```
    This will compile the source files for Experiment 1 and Experiment 3, generating the executables `Exp1` and `Exp3` respectively.

2. If you wish to compile the experiments individually, you can do so using the following commands:
    - For Experiment 1:
        ```bash
        make Exp1
        ```
    - For Experiment 3:
        ```bash
        make Exp3
        ```

### Execution

Once compiled, you can run the experiments using the following commands:

- For Experiment 1:
    ```bash
    ./Exp1
    ```

- For Experiment 3:
    ```bash
    ./Exp3
    ```

### Cleaning Up

After running the experiments, you may wish to clean up the directory by removing the compiled files and executables. Use the following command to do so:

```bash
make clean

