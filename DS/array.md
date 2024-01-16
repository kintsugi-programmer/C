# Chapter 2: Array

## Definition
- Single and Multidimensional Arrays
- Representation of Arrays: Row Major Order, and Column Major Order
- Derivation of Index Formulae for 1-D, 2-D, 3-D, and n-D Array
- Application of Arrays
- Sparse Matrices and their Representations

**Array:**
- Stores elements of the same type.
- Contiguous memory storage.
- Access via an index.
- Example: `int num[5];`

**Array Declaration in C:**
- Syntax: `datatype arrayName[arraySize];`
- Example: `int myarray[5];`
- In C, default values are undefined or garbage.
- Some languages (e.g., Java) auto-initialize array elements to defaults if not specified.
- In C, array size cannot be changed once declared.

**Array Initialization in C:**
- Syntax: `dataType arrayName[arraySize] = {value1, value2, ..., valueN};`
- Example: `int myarray[5] = {1, 2, 3, 4, 5};`
- Alternative initialization: `int myarray[] = {1, 2, 3, 4, 5};`
  - Compiler infers size from the number of elements (size is 5 in this case).

**Change Array Elements in C:**
```c
int myarray[5] = {1, 2, 3, 4, 5};
myarray[2] = -1;   // Change value of the third element to -1
myarray[4] = 0;    // Change value of the fifth element to 0
```

**Advantages of Arrays:**
- Efficient storage and retrieval: Contiguous memory enables easy element retrieval.
- Random access (fast access): Uniform time for accessing any array element.
- Easy to sort and search: Suitable for sorting and searching algorithms like binary search.
- Flexibility: Represents various data structures (e.g., stacks, queues).
- Easy to use: Simple and user-friendly for programmers of all skill levels.

**Disadvantages of Arrays:**
- Fixed size: Cannot be dynamically resized, challenging for dynamic data structures.
- No built-in support for insertion or deletion: Time-consuming, requires shifting elements.
- Homogeneous elements: Limited to storing elements of the same type.
- Poor performance for some operations: Operations like searching or inserting in sorted arrays can be less efficient than other data structures (e.g., hash tables, binary search trees).

**Applications of Arrays:**
- Memory Management: Efficient storage of multiple items of the same type.
- Data Representation: Used for vectors and matrices in mathematical operations.
- Database Management: Efficient storage and management of datasets in relational databases.
- Implementing Data Structures: Foundational for structures like heaps, hash tables, and strings.
- Caching & Buffering: Act as buffers, storing data temporarily before writing or transmitting over networks.

**Types of Indexing in Arrays:**
- **0 (Zero-based indexing):** First element indexed by 0.
- **1 (One-based indexing):** First element indexed by 1.
- **n (n-based indexing):** Base index freely chosen. Allows negative index values and other scalar data types (e.g., enumerations, characters) as array indices.

**Size of an Array:**
- Number of elements = (Upper bound – Lower Bound) + 1
- Lower bound index of the first element of the array
- Upper bound index of the last element of the array
- Size = number of elements * Size of each element in bytes

**One-Dimensional Array:**
- Address of the element at kth index: `a[k] = B + W*k`
- Modified for lower bound: `a[k] = B + W*(k – Lower bound)`
- B: Base address of the array
- W: Size of each element
- K: Index of the element
- Lower bound: Index of the first element
- Upper bound: Index of the last element

**Example:**
- Base address (B): 250
- Size of each element (W): 3 bytes
- Index of the element (k): 5
- Lower bound: Assume 0 for simplicity

**Address of the fifth element:**
- `a[5] = 250 + 3*(5 - 0) = 265`

**Array Address Calculation:**
- B: Base address of the array = 3500
- W: Size of each element = 4 bytes
- Lower bound: -6 (as given in the array declaration)
- Index of the element (k): 0

**Address of array[0]:**
- `a[0] = 3500 + 4*(0 - (-6)) = 3500 + 4*6 = 3500 + 24 = 3524`

**Two-Dimensional Array:**
- Array of arrays, organized as matrices with rows and columns.
- Used to implement a relational database-like data structure.
- Defined as: `data_type array_name[rows][columns];`
- Example:
  ```c
  int disp[2][4] = {
    {10, 11, 12, 13},
    {14, 15, 16, 17}
  };
  ```
  OR
  ```c
  int disp[2][4] = {10, 11, 12, 13, 14, 15, 16, 17};
  ```

Certainly! Here's an ASCII representation of a 2D array:

```
+---+---+---+
| 1 | 2 | 3 |
+---+---+---+
| 4 | 5 | 6 |
+---+---+---+
| 7 | 8 | 9 |
+---+---+---+
```
Certainly! Here's an ASCII representation of the expression `a1[i][j]` in the context of a 2D array:

```
+---+---+---+
| a1[0][0] | a1[0][1] | a1[0][2] |
+---+---+---+
| a1[1][0] | a1[1][1] | a1[1][2] |
+---+---+---+
| a1[2][0] | a1[2][1] | a1[2][2] |
+---+---+---+
```

This represents a 3x3 2D array where each cell is denoted by `a1[i][j]`. The indices `i` and `j` correspond to the row and column indices, respectively.

**Implementation of 2D Array:**
- **Row-Major Order:**
  - Elements of a row are stored contiguously in memory.
  - Traverse row by row.
  
- **Column-Major Order:**
  - Elements of a column are stored contiguously in memory.
  - Traverse column by column.

In memory, the arrangement of elements in a 2D array depends on whether it follows row-major order or column-major order.

**Row Major Implementation of 2D Array:**
- **Address of a[i][j]:**
  - `B + W * [ (U2 - L2 + 1) * (i - L1) + (j - L2)]`
- B: Base address
- W: Size of each element
- L1: Lower bound of rows
- U1: Upper bound of rows
- L2: Lower bound of columns
- U2: Upper bound of columns
- (U2 - L2 + 1): Number of columns
- (i - L1): Number of rows before the current row
- (j - L2): Number of elements before the current element in the current row

**Column Major Implementation of 2D Array:**
- **Address of a[i][j]:**
  - `B + W * [ (U1 - L1 + 1) * (j - L2) + (i - L1)]`
- B: Base address
- W: Size of each element
- L1: Lower bound of rows
- U1: Upper bound of rows
- L2: Lower bound of columns
- U2: Upper bound of columns
- (U1 - L1 + 1): Number of rows
- (j - L2): Number of columns before the current column
- (i - L1): Number of elements before the current element in the current column

Certainly! Below is an example of a 3x3 2D array implemented using row-major and column-major representations in C++:

```cpp
#include <iostream>

const int rows = 3;
const int cols = 3;

int main() {
    // Row-major implementation
    int rowMajor[rows][cols] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};

    // Displaying the row-major array
    std::cout << "Row Major Implementation:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << rowMajor[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Column-major implementation
    int columnMajor[cols][rows] = {{0, 3, 6}, {1, 4, 7}, {2, 5, 8}};

    // Displaying the column-major array
    std::cout << "\nColumn Major Implementation:" << std::endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            std::cout << columnMajor[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
```

This code demonstrates the initialization and display of a 3x3 array using both row-major and column-major implementations in C++.

Certainly! Below is the ASCII representation of the 3x3 2D array for both row-major and column-major implementations:

**Row Major Implementation:**
```plaintext
+---+---+---+
| 0 | 1 | 2 |
+---+---+---+
| 3 | 4 | 5 |
+---+---+---+
| 6 | 7 | 8 |
+---+---+---+
```

**Column Major Implementation:**
```plaintext
+---+---+---+
| 0 | 3 | 6 |
+---+---+---+
| 1 | 4 | 7 |
+---+---+---+
| 2 | 5 | 8 |
+---+---+---+
```

In these representations, each cell corresponds to the respective element in the array. The row-major and column-major implementations have different memory layouts, as illustrated by the arrangement of the numbers in the grid.

Given:
- Array: `VAL[1…15][1…10]`
- Each element requires 4 bytes.
- Base address (B) of the array: 1500

**Row-Wise Implementation:**
- Using the formula `B + W * [ (U2 - L2 + 1) * (i - L1) + (j - L2)]`
- For `VAL[12][9]`:
  - `B + 4 * [ (10 - 1 + 1) * (12 - 1) + (9 - 1)]`
  - `1500 + 4 * [10 * 11 + 8]`
  - `1500 + 4 * [118]`
  - `1500 + 472`
  - `1972`

**Column-Wise Implementation:**
- Using the formula `B + W * [ (U1 - L1 + 1) * (j - L2) + (i - L1)]`
- For `VAL[12][9]`:
  - `B + 4 * [ (15 - 1 + 1) * (9 - 1) + (12 - 1)]`
  - `1500 + 4 * [16 * 8 + 11]`
  - `1500 + 4 * [139]`
  - `1500 + 556`
  - `2056`

Therefore, the location of `VAL[12][9]` is:
- Row-wise: 1972
- Column-wise: 2056

**3-Dimensional Array:**
- Array: A([L1]---[U1]), ([L2]---[U2]), ([L3]---[U3])
- Location of A [i, j, k] = `B + (i-L1) (U2-L2+1) (U3-L3+1) + (j-L2)(U3-L3+1) + (k-L3)`
- B: Base address
- (i-L1): Number of elements before the current element in the first dimension
- (U2-L2+1): Number of elements in the second dimension
- (U3-L3+1): Number of elements in the third dimension
- (j-L2): Number of elements before the current element in the second dimension
- (k-L3): Number of elements before the current element in the third dimension