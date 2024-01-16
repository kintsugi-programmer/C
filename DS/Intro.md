# Chapter 1: Introduction

## Basic Terminology, Elementary Data Organization, Built-in Data Types in C
- Abstract Data Types (ADT)

**Idea of Computer Science:**
- problem => algo(correct solution) => program(efficient time and money)

**Essentials for Efficient Programming:**
- Need DS and A knowledge.
- "DSA = Good Program."

**Significance of Data Structures and Algorithms:**
- Teach coding efficiency.
- Efficiency = time, space, resources.
- Optimize with right structures and algorithms.
- Priority on optimization over clever coding.

**Data Structure:**
- Organizes data in computer memory efficiently.
- Involves logical relationships between individual data elements.
- Specifies organization, accessing methods, degree of association, and processing methods.

**Effect of Data Structure:**
- Impacts program's structural and functional aspects.
- Various data structures for diverse applications.
- Specialized structures for specific tasks.
  - E.g., B-trees in relational databases.
  - Hash tables in compiler implementations.
- Efficient structures crucial for algorithm efficiency.
- Some design methods prioritize data structures over algorithms.
- Implementation involves procedures for creating and manipulating instances.

**Primitive Data Structure:**
- Predefined storage and operations.
- Directly manipulated by machine instructions.
- Examples: char, int, float, double.
- Predefined operations like addition, subtraction.

**Non-Primitive Data Structure:**
- When primitive structures aren't enough.
- Derived data structures made using primitives, e.g., arrays.
- Operations on derived structures are predefined.
- User-defined types created using language constructs (e.g., structure, class).
- User defines operations for types like Linked Lists, Trees, etc.

1. **Primitive Data Structures:**
   - **Definition:** Primitive data structures are the basic, fundamental data types that are directly operated upon by the machine instructions. They are simple and have a fixed size.
   - **Examples:**
     - **Integer:** Represents whole numbers (e.g., 1, 42, -5).
     - **Float/Double:** Represents real numbers with decimal points (e.g., 3.14, -0.5).
     - **Character:** Represents a single character (e.g., 'a', '5', '@').
     - **Boolean:** Represents true or false values.

   - **Usage:** These data types are used to build more complex data structures and algorithms. They are the building blocks of programming languages.

   - **ASCII Art Representation:**
     - Integer: `5`
     - Float: `3.14`
     - Character: `A`
     - Boolean: `true`

2. **Non-Primitive Data Structures:**
   - **Definition:** Non-primitive data structures are more complex data types that are derived from or built upon primitive data types. They can store a collection of data and are not fixed in size.
   - **Examples:**
     - **Arrays:** Ordered collection of similar data types.
     - **Linked Lists:** Elements are connected through pointers.
     - **Stacks and Queues:** Follow a specific order for adding and removing elements.
     - **Trees:** Hierarchical data structure with a root and branches.
     - **Graphs:** Networks of nodes connected by edges.

   - **Usage:** Non-primitive data structures are essential for solving more complex problems. They provide flexibility and efficiency in managing and organizing large sets of data.

   - **ASCII Art Representation (Example: Array):**
     ```
     +---+---+---+---+
     | 1 | 2 | 3 | 4 |
     +---+---+---+---+
     ```

```
Data Structures Tree:

- Primitive Data Types
  - Integer
  - Float/Double
  - Character
  - Boolean

- Non-Primitive Data Structures
  - Linear Data Structures
    - Arrays
    - Linked Lists
    - Stacks
    - Queues

  - Non-Linear Data Structures
    - Trees
      - Binary Trees
        - Binary Search Trees
        - AVL Trees
        - Red-Black Trees
      - Heap
        - Min Heap
        - Max Heap
    - Graphs
      - Directed Graphs
      - Undirected Graphs
      - Weighted Graphs
    - Hash Tables
      - Open Addressing
      - Separate Chaining

  - Advanced Data Structures
    - Trie
    - Skip List
    - B-Trees
    - Bloom Filter

  - Composite Data Structures
    - Records
    - Union
    - Enumeration

  - File Structures
    - Sequential File
    - Indexed Sequential File
    - Hashed File
```
**Linear vs. Non-Linear Data Structures:**
- **Linear Data Structure:**
  - Elements in linear order, connected sequentially.
  - Single level involved.
  - Easy implementation.
  - Traversable in a single run.
  - Examples: array, stack, queue, linked list.

   Array
+---+---+---+---+---+
| 1 | 2 | 3 | 4 | 5 |
+---+---+---+---+---+

   Linked List
+---+    +---+    +---+
| 1 |--> | 2 |--> | 3 |
+---+    +---+    +---+
```
   Stack
  ---
 | 3 |
 | 2 |
 | 1 |
  ---

   Queue
  ---
 | 1 |
 | 2 |
 | 3 |
  ---
  ```
- **Non-Linear Data Structure:**
  - Elements in a hierarchical manner.
  - Multiple levels involved.
  - Complex implementation.
  - Non-traversable in a single run.
  - Examples: trees and graphs.

```
   Binary Tree
      1
     / \
    2   3
   / \
  4   5

   Graph
  1---2
   \ /
    3
```
**Homogeneous vs. Heterogeneous Data:**
- **Homogeneous Data:**
  - Contains only similar types, e.g., integers or floats.
  - Simplest example: Array.

- **Heterogeneous Data:**
  - Contains dissimilar types, e.g., integers, floats, characters.
  - Examples: structures, unions, etc.

