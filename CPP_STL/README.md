# C++ STL

C++ Standard Template Library (STL) serves as a powerful toolkit for C++, offering a range of essential data structures and algorithms. It plays a crucial role in making C++ a preferred language for Competitive Programming (CP).

## Getting Started

To begin using STL, include the following header at the beginning of your C++ code:

```cpp
#include<bits/stdc++.h> 
using namespace std;
```

#include bits std c++ header file 

This single line imports all necessary STL containers and functions, making them readily available for use in your program.

## STL Components

STL provides a comprehensive set of components, including various data structures and algorithms. Here are some key elements:

### Data Structures

1. **Vectors**: Dynamic arrays that can grow or shrink in size.
2. **Lists**: Doubly-linked lists offering efficient insertion and deletion.
3. **Stacks**: LIFO (Last-In-First-Out) data structures.
4. **Queues**: FIFO (First-In-First-Out) data structures.
5. **Sets and Maps**: Collections of unique elements and key-value pairs, respectively.
6. **Unordered Sets and Maps**: Similar to sets and maps but unordered for faster access.

### Algorithms

1. **Sorting**: Functions for sorting elements in containers.
2. **Searching**: Functions for finding elements in containers.
3. **Binary Search**: Efficient search in sorted containers.
4. **Permutations**: Generating permutations of elements.
5. **Next Permutation**: Rearranging elements to the next lexicographically greater permutation.
6. **Accumulate**: Computing the sum of elements in a range.
7. **Counting**: Counting occurrences of elements in a range.

## Example Usage

Here's a simple example demonstrating the usage of vectors and sorting:

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers = {5, 2, 8, 1, 3};

    // Sort the vector in ascending order
    sort(numbers.begin(), numbers.end());

    // Print the sorted vector
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
```

This code snippet creates a vector of integers, sorts it in ascending order using the `sort` algorithm, and then prints the sorted elements.

Feel free to explore and experiment with different STL components to enhance your C++ programming skills.

In Progress of learning
--[Rough.txt](Rough.txt)
--[tut1.md](tut1.md)
[Intro.md](Intro.md) no use

[tut1.md](vectors.cpp)
[tut1.md](sort.cpp) most efficient
[tut1.md](pair.cpp)
[tut1.md](sort_array_vectors_of_pairs.cpp)
[tut1.md](Iterators.cpp)
[tut1.md](Sets.cpp)
[tut1.md](Set_Iterators.cpp)
[tut1.md](Map.cpp)
[tut1.md](Iterating_Containers.cpp) WATCH VIDEO FROM HERE
[tut1.md](Custom_Comparators.cpp)


## Try Out These Problems

https://codeforces.com/problemsext/problem/22/A (SET)
https://codeforces.com/problemset/problem/782/A (SET)
https://codeforces.com/problemset/problem/4/C (MAP)


https://codeforces.com/contest/903/problem/C (MAP - medium level)


Do these also without knowing which containers to use:
https://www.spoj.com/problems/MINSTOCK/
https://codeforces.com/problemset/problem/799/B


Also, keep practicing problems from Codeforces, div2 B and C often require you to use some STL containers and functions.

## References (Can be used like “Glossary”)

Any STL container or function, you want to learn about: Just google search
“Cplusplus [container name]”

For example: “Cplusplus vector” gives the following result:
https://www.cplusplus.com/reference/vector/vector/

Similarly:
https://www.cplusplus.com/reference/set/set/
https://www.cplusplus.com/reference/map/map/

BEST OF LUCK!

## Further Study (Not Relevant for Beginners)
Read about these containers on your own, it should be easy because most of the important concepts are already covered. These are less commonly used so you don’t need to worry about these for a long time.
queue
stack
deque
priority_queue
multiset / multimap  ->  can store duplicates (too complex for beginners)
unordered_set / unordered_map (like HashSet or HashMap in Java)
NOTE: unordered set and map are not-reliable and can perform bad in certain situations, beginners should always avoid them.






