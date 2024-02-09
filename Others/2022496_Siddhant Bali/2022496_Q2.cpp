#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int l1, int m, int r1) ;
void mSortRecursive(int arr[], int l1, int r1) ;
void mSortIterative(int arr[], int n) ;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array:\n";
    int i = 0;
    while (i < n) {
        cin >> arr[i];
        ++i;
    }

    mSortRecursive(arr, 0, n - 1);
    cout << "Array sorted using recursive merge sort: ";
    i = 0;
    while (i < n) {
        cout << arr[i] << " ";
        ++i;
    }
    cout << "\n";

    mSortIterative(arr, n);
    cout << "Array sorted using iterative merge sort: ";
    i = 0;
    while (i < n) {
        cout << arr[i] << " ";
        ++i;
    }
    cout << "\n";

    return 0;
}


void merge(int arr[], int l1, int m, int r1) {
    int n1 = m - l1 + 1;
    int L[n1];
    int n2 = r1 - m;
    int R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l1 + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l1;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mSortRecursive(int arr[], int l1, int r1) {
    if (l1 < r1) {
        int m = l1 + (r1 - l1) / 2;

        mSortRecursive(arr, l1, m);
        mSortRecursive(arr, m + 1, r1);

        merge(arr, l1, m, r1);
    }
}

void mSortIterative(int arr[], int n) {
    for (int s1 = 1; s1 <= n - 1; s1 = 2 * s1) {
        for (int s_l1 = 0; s_l1 < n - 1; s_l1 += 2 * s1) {
            int m = min(s_l1 + s1 - 1, n - 1);
            int r1_end = min(s_l1 + 2 * s1 - 1, n - 1);
            merge(arr, s_l1, m, r1_end);
        }
    }
}