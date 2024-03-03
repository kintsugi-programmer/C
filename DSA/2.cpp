#include <bits/stdc++.h>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) // If element found at mid, return mid
            return mid;

        if (arr[mid] < x) // If x is greater, ignore left half
            low = mid + 1;
        else // If x is smaller, ignore right half
            high = mid - 1;
    }

    // If element is not present in array, return -1
    return -1;
}

// Driver code
int main(void) {
    int arr[] = { 2, 3, 4, 10, 40 }; // Sorted array
    int x = 10; // Element to be searched
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    // Perform binary search
    int result = binarySearch(arr, 0, n - 1, x);

    // Print result
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;

    return 0;
}
