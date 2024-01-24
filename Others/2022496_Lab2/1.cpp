#include <iostream>

using namespace std;

int count_inversions(int arr[], int n) {
    int inv_count = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            inv_count++;
        }

        arr[j + 1] = key;
    }

    return inv_count;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int inversions = count_inversions(arr, n);
    cout << "Total number of inversions: " << inversions << endl;

    int max_inversions = n * (n - 1) / 2;  // Comment added to explain the formula
    cout << "Highest possible number of inversions using Insertion Sort: " << max_inversions << endl;

    
    delete[] arr;
    return 0;
}
