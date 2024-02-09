#include <iostream>
using namespace std;

int maxCrossingSum(int arr[], int low, int mid, int high) {
    int INT_MIN=-2147483648;
    int left_sum = INT_MIN;
    int sum = 0;
    for (int i = mid; i >= low; i--) {
        sum += arr[i];
        if (sum > left_sum)
            left_sum = sum;
    }

    int right_sum = INT_MIN;
    sum = 0;
    for (int i = mid + 1; i <= high; i++) {
        sum += arr[i];
        if (sum > right_sum)
            right_sum = sum;
    }

    return left_sum + right_sum;
}

int maxSubarraySum(int arr[], int low, int high) {
    if (low == high)
        return arr[low];

    int mid = (low + high) / 2;

    int left_sum = maxSubarraySum(arr, low, mid);
    int right_sum = maxSubarraySum(arr, mid + 1, high);
    int cross_sum = maxCrossingSum(arr, low, mid, high);

    return max(max(left_sum, right_sum), cross_sum);
}

int main() {
    int arr1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Scenario 1: " << maxSubarraySum(arr1, 0, n1 - 1) << endl;

    int arr2[] = {1, 2, 3, 4, -10, 6, 7, 8, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Scenario 2: " << maxSubarraySum(arr2, 0, n2 - 1) << endl;

    int arr3[] = {-5, -2, -6, -1, -2, -3, -7, -4};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Scenario 3: " << maxSubarraySum(arr3, 0, n3 - 1) << endl;

    return 0;
}



/*
2.(5 points)Array, Recursion: CO 1, CO2 
Write a divide and conquer algorithm that recursively divides the array into smaller subarrays, computes the maximum subarray sum for each subarray, and combines the results to reveal the overall maximum subarray sum. What is the time complexity of your algorithm? Mention as comments. 

Scenario 1:
Array: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
Expected Output: 6
Explanation: The contiguous subarray [4, -1, 2, 1] has the largest sum of 6.

Scenario 2:
Array: [1, 2, 3, 4, -10, 6, 7, 8, 9]
Expected Output: 35
Explanation: The entire array [1, 2, 3, 4, -10, 6, 7, 8, 9] has the largest sum of 35.

Scenario 3:
Array: [-5, -2, -6, -1, -2, -3, -7, -4]
Expected Output: -1
Explanation: The contiguous subarray [-1] has the largest sum of -1.
*/