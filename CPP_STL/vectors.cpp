#include <bits/stdc++.h>
using namespace std;

/*
It is a dynamic sized array. Number of elements can be increased or decreased. (In Java same behaviour is shown by ArrayList).
vector<int> v; // empty vector of integers
vector<int> v(10); // vector of integers with 10 elements (all 0)
vector<char> v(10,’h’); // vector of chars with 10 elements (all ‘h’)
Important Functions:
v.push_back(x) - insert the value x to the end of the vector. O(1)
v.pop_back() - erase the last element. O(1)
v.pop_back(X) - erase the element at index X. O(n
v.clear() - erase all elements. O(n)
v.size() - returns the current size of the vector. O(1)
[] operator - can be used to access elements like an array. O(1)
cout << v[0]; // prints the first element in the vector
*/

int main() {
    vector<int> v1[50]; // array of 50 vectors
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    v.pop_back();
    cout << v.size() << endl;
    v.clear();
    cout << v.size() << endl;
    return 0;
}

/*  Importance of Vectors :
Vectors are very important in competitive programming. They are used in almost every problem.

There are hundreds of use-cases but some of them might be too advanced to beginners, so here is an easier example.
Given N numbers in input, print 2 lines, in first line, all even integers in sorted order, in second line, all odd integers in sorted order.
Solution hint:
Make 2 vectors - one for even elements, other for odd elements, push_back() the elements into the correct vector accordingly. Then sort both vectors and print.

(Note: This problem can be done without vectors also, but it is easier with vectors)


*/