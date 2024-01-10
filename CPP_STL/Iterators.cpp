// These behave a lot like pointers.
// vector<int> v = {10, 15, 12, 5, 20};
// vector<int>::iterator it = v.begin(); 
// OR
// auto it = v.begin();
// cout << *it; // 10
// it++;
// cout << *it; // 15
// it--;
// cout << *it; // 10
// cout << *(it + 3); // 5

// NOTE: v.end() is the iterator to a non-existent element (after the last element)

// “auto” keyword is used to deduce datatype automatically
// in pointers :
// int a[5] = {10, 15, 12, 5, 20};
// int *p = a; 


// cout << *p; // 10
// p++;
// cout << *p; // 15
// p--;
// cout << *p; // 10
// cout << *(p + 3); // 5
