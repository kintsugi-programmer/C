# Chapter 3: Linked Lists

## Array Implementation and Pointer Implementation of Singly Linked Lists
- Doubly Linked List
- Circularly Linked List
- Operations on a Linked List: Insertion, Deletion, Traversal
- Polynomial Representation and Operations (Addition, Subtraction, Multiplications) of Single Variable & Two Variables Polynomial

**Problems with Arrays:**
- **Fixed Size and Reallocation:**
  - Fixed size may lead to memory waste if allocated size is larger than actual data.
  - Resizing requires creating a new array and copying elements, which can be inefficient.

- **Inefficient Insertion and Deletion:**
  - Adding or removing elements in the middle requires shifting remaining elements, leading to higher time complexity (O(n)) compared to linked lists.

- **Less Flexible:**
  - Arrays can only store elements of the same data type.
  - Structure cannot be easily adapted to different types (e.g., singly, doubly, circular) like linked lists.

**Solution : Linked List:**
- Dynamic data structure with nodes connected in a linear sequence.
- Each node has two parts: data and a reference to the next node.
- Data part can store various types of information (integers, characters, objects, etc.).
- Next pointer field contains the address of the next node in the list.
- Pointer of the last node contains a null pointer (invalid address).
- Contains a list pointer variable (start/first/head) with the address of the first node.
- Special case: A list with no nodes is a null list or empty list, denoted by a null pointer in the variable start/first/head.

**Implementation of Linked List:**
```c
struct node
{
  int data;
  struct node *next;
};
```
- Defines a structure `node` with two parts:
  - `data`: Represents the information part of the node, storing an integer.
  - `next`: Reference to the next node in the linked list, using a pointer to the same structure type (`struct node`).
- This structure is the building block for creating a linked list. Each node in the list will have an integer data field and a pointer to the next node in the sequence.

Sure, I can help you visualize a linked list using ASCII art. In a linked list, each element (node) contains data and a reference (pointer) to the next element in the sequence. Here's a simple representation:

```
+---+    +---+    +---+    +---+
| 1 | -> | 2 | -> | 3 | -> | 4 |
+---+    +---+    +---+    +---+
```

In this example, each box represents a node, and the arrows indicate the direction of the pointers. The numbers inside the boxes are the data stored in each node. This linked list has four nodes (1, 2, 3, and 4) where each node points to the next one.

Let me know if you have a specific type of linked list or a particular structure in mind, and I can provide a more customized visualization.

Certainly! Below is a simple C++ implementation of a singly linked list with a Node structure and basic operations like insertion at the end and printing:

```cpp
#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the end of the linked list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to print the linked list
    void printList() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    // Creating a linked list and inserting elements
    LinkedList myList;
    myList.insertAtEnd(1);
    myList.insertAtEnd(2);
    myList.insertAtEnd(3);
    myList.insertAtEnd(4);

    // Printing the linked list
    std::cout << "Linked List: ";
    myList.printList();

    return 0;
}
```

In this code, the `Node` structure represents each element of the linked list, and the `LinkedList` class provides methods for insertion at the end (`insertAtEnd`) and printing the list (`printList`). The `main` function demonstrates how to create a linked list and perform basic operations.

**Advantages of Linked List:**
- **Dynamic Size and Efficient Memory Usage:**
  - Easily grows or shrinks, allowing for efficient memory allocation and reduced waste.

- **Fast Insertion and Deletion:**
  - Constant time (O(1)) for inserting or removing elements if the position is known, offering better performance compared to arrays.

- **Versatility:**
  - Can be adapted to various types (singly, doubly, circular).
  - Can store elements of different data types or objects, providing a flexible data structure for a wide range of applications.

**Disadvantages of Linked List:**
- **Slower Access Times:**
  - Higher time complexity for element access (O(n)) compared to arrays, as elements must be accessed sequentially from the head of the list.

- **Memory Overhead:**
  - Each node in a linked list requires additional memory to store the reference (or pointer) to the next node, increasing overall memory usage compared to array-based structures.

- **Pointer Manipulation:**
  - Implementing linked lists involves managing pointers, which can increase code complexity and lead to potential issues, such as memory leaks or segmentation faults, if not handled carefully.

  ```
+---------------------------+---------------------------------------------+
| Aspect                  | Array                                       | Linked List                                 |
+---------------------------+---------------------------------------------+
| Memory Allocation        | Contiguous memory locations.                | Non-contiguous memory locations.            |
| Size Flexibility         | Fixed size.                                 | Dynamic size, can grow or shrink as required.|
| Access Time              | O(1) for direct access due to indexing.     | O(n) for accessing an element as it requires traversal. |
| Insertion/Deletion       | O(n) in worst case as shifting may be required. | O(1) if the pointer to the node is known.   |
| Memory Efficiency        | More memory efficient for a known size of data. | Extra memory for pointers, which can be overhead for small data sizes. |
+---------------------------+---------------------------------------------+
```

pg171 (still stacks and queue are pending)