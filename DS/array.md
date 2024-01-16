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

Given:
- Multidimensional array: `Q(1: 8, – 5: 5, – 10 : 5)`
- Stored in column-major order
- Base address (B) = 400
- Size of each element (W) = 4

**Length of Each Dimension:**
- Dimension 1: `U1 - L1 + 1 = 8 - 1 + 1 = 8`
- Dimension 2: `U2 - L2 + 1 = 5 - (-5) + 1 = 11`
- Dimension 3: `U3 - L3 + 1 = 5 - (-10) + 1 = 16`

**Number of Elements in Q:**
- Total elements = `8 * 11 * 16 = 1408`

**Effective Indices (E1, E2, E3) for Q[3, 3, 3]:**
- E1 = 3
- E2 = 3
- E3 = 3

**Address of Q[3, 3, 3]:**
- Using the formula: `B + (i-L1) (U2-L2+1) (U3-L3+1) + (j-L2)(U3-L3+1) + (k-L3)`
- For Q[3, 3, 3]:
  - `400 + (3-1) * 11 * 16 + (3-(-5))(16) + (3-(-10))`
  - `400 + 2 * 176 + 8 * 16 + 13`
  - `400 + 352 + 128 + 13`
  - `893`

Therefore, the effective indices for Q[3, 3, 3] are 3, 3, 3, and its address is 893.

Representing a 3D array in ASCII art can be challenging due to the complexity of three dimensions. However, I can create a simplified representation to give you an idea. Let's consider a 3x3x3 3D array:

```plaintext
Dimension 1 (X)
  +---------------------+
 /   Slice 1            /|
| +---+---+---+        | |
| |   |   |   |        | |
| +---+---+---+        | +
| |   |   |   |        |/
| +---+---+---+        +

  +---------------------+
 /   Slice 2            /|
| +---+---+---+        | |
| |   |   |   |        | |
| +---+---+---+        | +
| |   |   |   |        |/
| +---+---+---+        +

  +---------------------+
 /   Slice 3            /|
| +---+---+---+        | |
| |   |   |   |        | |
| +---+---+---+        | +
| |   |   |   |        |/
| +---+---+---+        +
          Dimension 2 (Y)
```

In this representation, each "slice" represents a two-dimensional grid, and the entire structure visualizes the three-dimensional array. Please note that this is a simplified representation, and in a real-world scenario, the dimensions could be larger, leading to a more intricate structure.

**N-Dimensional Array:**
- Array: A([L1]---[U1]), ([L2]---[U2]), ([L3]---[U3]), ([L4]---[U4])--------([LN]---[UN])
- Location of A [i, j, k, ----, x] = `B + (i-L1) (U2-L2+1) (U3-L3+1) (U4-L4+1) ----(Un-Ln+1) + (j-L2)(U3-L3+1) (U4-L4+1) ----(Un-Ln+1) + (k-L3)(U4-L4+1) ----(Un-Ln+1) + ... + (x-Ln)`
- B: Base address
- (i-L1), (j-L2), (k-L3), ..., (x-Ln): Number of elements before the current element in each dimension
- (U2-L2+1), (U3-L3+1), (U4-L4+1), ..., (Un-Ln+1): Number of elements in each dimension

**Sparse Matrix:**
- A matrix is sparse if a large number of its elements are zero; otherwise, it is dense.
- Advantages:
  - **Storage Efficiency:** Saves memory by storing only non-zero elements.
  - **Computational Speed:** Faster operations by skipping zero values.

Visualizing a sparse matrix in ASCII art can be challenging, as it depends on the actual data in the matrix. A sparse matrix is one that contains mostly zero elements, and only the non-zero elements are explicitly represented along with their indices. However, I can provide a textual representation of a simple sparse matrix along with its indices:

Consider the following sparse matrix:

```plaintext
Sparse Matrix:
+---+---+---+---+---+
| 0 | 0 | 0 | 0 | 0 |
+---+---+---+---+---+
| 0 | 0 | 8 | 0 | 0 |
+---+---+---+---+---+
| 0 | 0 | 0 | 0 | 0 |
+---+---+---+---+---+
| 0 | 0 | 0 | 5 | 0 |
+---+---+---+---+---+
```

In this example, the non-zero elements (8 and 5) are shown along with their respective row and column indices. Depending on the actual data in your sparse matrix, you would represent the non-zero elements accordingly.

If you have a specific sparse matrix or format in mind, let me know, and I can try to assist you further.

**Sparse Matrix Representations:**
- Two common representations:
  - **Array Representation**
  - **Linked List Representation**

Certainly! Sparse matrices are often represented in two main ways: Array Representation and Linked List Representation.

### Array Representation:

In the array representation of a sparse matrix, three arrays are typically used:

1. **Row Index Array (`row_index[]`):** Stores the row indices of the non-zero elements.
2. **Column Index Array (`col_index[]`):** Stores the column indices of the non-zero elements.
3. **Value Array (`value[]`):** Stores the values of the non-zero elements.

Here's a textual representation of these arrays for a sample sparse matrix:

```
Array Representation:
Row Index:    1  1  3  4
Column Index: 3  4  2  4
Value:        8  3  6  5
```

This representation indicates that there are non-zero elements at positions (1,3) with a value of 8, (1,4) with a value of 3, (3,2) with a value of 6, and (4,4) with a value of 5.

### Linked List Representation:

In the linked list representation, each node of the linked list contains three fields:

1. **Row:** Stores the row index of the non-zero element.
2. **Column:** Stores the column index of the non-zero element.
3. **Value:** Stores the value of the non-zero element.
4. **Next:** Points to the next non-zero element in the list.

Here's a textual representation of a linked list for the same sample sparse matrix:

```
Linked List Representation:
(1,3) -> (1,4) -> (3,2) -> (4,4)
      8       3       6       5
```

Each node in the linked list corresponds to a non-zero element, and the arrows represent the links between nodes.

Both representations have their advantages and are chosen based on the specific requirements and operations performed on the sparse matrix.

Certainly! Here's a simple example of both array and linked list representations of a sparse matrix in C++:

### Array Representation:

```cpp
#include <iostream>
using namespace std;

const int MAX = 100;

class SparseMatrixArray {
private:
    int row, col, num;
    int row_index[MAX];
    int col_index[MAX];
    int value[MAX];

public:
    SparseMatrixArray(int r, int c) {
        row = r;
        col = c;
        num = 0;
    }

    void insert(int r, int c, int v) {
        if (r >= 0 && r < row && c >= 0 && c < col && num < MAX) {
            row_index[num] = r;
            col_index[num] = c;
            value[num] = v;
            num++;
        } else {
            cout << "Invalid position or exceeding array size." << endl;
        }
    }

    void display() {
        cout << "Array Representation:" << endl;
        cout << "Row Index: ";
        for (int i = 0; i < num; ++i) {
            cout << row_index[i] << " ";
        }
        cout << endl;

        cout << "Column Index: ";
        for (int i = 0; i < num; ++i) {
            cout << col_index[i] << " ";
        }
        cout << endl;

        cout << "Value: ";
        for (int i = 0; i < num; ++i) {
            cout << value[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    SparseMatrixArray sparse(4, 5);

    sparse.insert(1, 3, 8);
    sparse.insert(1, 4, 3);
    sparse.insert(3, 2, 6);
    sparse.insert(4, 4, 5);

    sparse.display();

    return 0;
}
```

### Linked List Representation:

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int row, col, value;
    Node* next;

    Node(int r, int c, int v) {
        row = r;
        col = c;
        value = v;
        next = nullptr;
    }
};

class SparseMatrixLinkedList {
private:
    Node* head;

public:
    SparseMatrixLinkedList() {
        head = nullptr;
    }

    void insert(int r, int c, int v) {
        Node* newNode = new Node(r, c, v);
        if (!head) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void display() {
        cout << "Linked List Representation:" << endl;
        Node* current = head;
        while (current) {
            cout << "(" << current->row << "," << current->col << ") -> ";
            cout << current->value << " ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    SparseMatrixLinkedList sparse;

    sparse.insert(1, 3, 8);
    sparse.insert(1, 4, 3);
    sparse.insert(3, 2, 6);
    sparse.insert(4, 4, 5);

    sparse.display();

    return 0;
}
```

These examples demonstrate the basic insertion and display operations for both array and linked list representations of a sparse matrix in C++.

**Array Representation of Sparse Matrix:**
- 2D array used to represent a sparse matrix.
- Three rows:
  - **Row:** Index of the row where the non-zero element is located.
  - **Column:** Index of the column where the non-zero element is located.
  - **Value:** Value of the non-zero element located at the index (row, column).

**Linked List Representation of Sparse Matrix:**
- In a linked list, each node has four fields:
  - **Row:** Index of the row where the non-zero element is located.
  - **Column:** Index of the column where the non-zero element is located.
  - **Value:** Value of the non-zero element located at the index (row, column).
  - **Next node:** Address of the next node in the linked list.

  Sure, let's create a simple example to illustrate a matrix along with its sparse array and sparse linked list representations.

### Example Matrix:
Consider the following 4x4 matrix:

```plaintext
Matrix:
+---+---+---+---+
| 1 | 0 | 0 | 0 |
+---+---+---+---+
| 0 | 0 | 2 | 0 |
+---+---+---+---+
| 0 | 3 | 0 | 0 |
+---+---+---+---+
| 0 | 0 | 0 | 4 |
+---+---+---+---+
```

### Sparse Array Representation:
For the sparse array representation, let's assume we are representing only non-zero elements along with their row and column indices:

```plaintext
Sparse Array Representation:
Row Index:    0  1  2  2  3  3
Column Index: 0  2  1  3  3  0
Value:        1  2  3  4
```

### Sparse Linked List Representation:
For the sparse linked list representation, we'll create a linked list where each node contains the row, column, and value of a non-zero element:

```plaintext
Sparse Linked List Representation:
(0,0) -> (1,2) -> (2,1) -> (2,3) -> (3,3) -> (3,0) -> nullptr
        1       2       3       4
```

In both sparse representations, we store only the non-zero elements along with their corresponding row and column indices. The array representation uses three arrays, while the linked list representation uses a linked list structure. These representations save memory for sparse matrices by avoiding the need to store all zero elements.

**Problems with Arrays:**
- **Fixed Size and Reallocation:**
  - Fixed size may lead to memory waste if allocated size is larger than actual data.
  - Resizing requires creating a new array and copying elements, which can be inefficient.

- **Inefficient Insertion and Deletion:**
  - Adding or removing elements in the middle requires shifting remaining elements, leading to higher time complexity (O(n)) compared to linked lists.

- **Less Flexible:**
  - Arrays can only store elements of the same data type.
  - Structure cannot be easily adapted to different types (e.g., singly, doubly, circular) like linked lists.