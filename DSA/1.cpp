#include <bits/stdc++.h> // This line includes all standard C++ libraries
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int N, int x){
    for(int i = 0; i < N; i++)
        if (arr[i] == x) { // If element found, return its index
            return i;
        }
    return -1; // If element not found, return -1
}

// Driver code
int main(void) {
    int arr[] = { 2, 3, 4, 10, 40 }; // Array to be searched
    int x = 0; // Element to be searched
    int N = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
 
    // Function call
    int result = linearSearch(arr, N, x); // Perform linear search
    
    // Print result
    (result == -1)
        ? cout << "Element is not present in array" // If element not found
        : cout << "Element is present at index " << result; // If element found, print its index
    
    return 0;
}
