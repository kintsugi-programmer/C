// Set iterators offer less features than vector iterators.
// auto it = s.begin(); // it is the iterator to the first element
// it++, it--, ++it, --it   ->   These are all valid and work in O(logN) time

// NOTE: (it + 5) or it += 2 etc are INVALID. To advance multiple steps, do it++ multiple times. if its done 5 time to it will take O(5logN) time.

// Functions related to set iterators:
// s.find(x): returns iterator to element with value x. Returns s.end() if not found. O(logN)
// s.lower_bound(x): returns iterator to the first element which is >= x. Returns s.end() if not found. O(logN)
// s.upper_bound(x): returns iterator to the first element which is > x. Returns s.end() if not found. O(logN)
// s.erase(it): erases the element with iterator it. O(logN)

// Both of the next 2 lines are exactly same.
// if(s.find(10) == s.end()) cout << “Not Found”;
// if(s.count(10) == 0) cout << “Not Found”;

// NOTE: (it + 5) or it += 2 etc are INVALID. To advance multiple steps, do it++ multiple times.

// NOTE: s.end() is the iterator to a non-existent element (after the last element)

// cout << *it << "\n"; // prints the value of the element pointed by the iterator
// cout << *s.begin() << "\n"; // prints the value of the first element
// s.begin() == s.end() // returns true if the set is empty
// *s.begin() : This is the first element of the set. It is the smallest element in the set.

