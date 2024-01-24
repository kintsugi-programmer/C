#include <bits/stdc++.h>
using namespace std;
int m(int arr[], int temp[], int l, int mid, int r);
int m_sort(int arr[], int temp[], int l, int r);
int inv_m_sort(int arr[], int n);
int main() {
    
    int arrm_sort[] = {1, 3, 2, 5};
    int sizem_sort = sizeof(arrm_sort) / sizeof(arrm_sort[0]);
    int inversionsm_sort = inv_m_sort(arrm_sort, sizem_sort);

    cout << "Merge Sort Inversions : " << inversionsm_sort << endl;
    cout << "Time complexity is O(n log n) for Merge Sort. No direct relation with inv." << endl;
    cout << "Best case: O(n log n), Worst case: O(n log n)" << endl;


    return 0;
}


int m(int arr[], int temp[], int l, int mid, int r) {
    int inv = 0;
    int i = l, j = mid, k = l;

    for (; (i <= mid - 1) && (j <= r);) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv += (mid - i);
        }
    }

    for (; i <= mid - 1;)
        temp[k++] = arr[i++];
    for (; j <= r;)
        temp[k++] = arr[j++];

    for (i = l; i <= r; i++)
        arr[i] = temp[i];

    return inv;
}

int m_sort(int arr[], int temp[], int l, int r) {
    int inv = 0;
    if (l >= r)
        inv = 0;
    else if (l < r) {
        int mid = (l + r) / 2;

        inv += m_sort(arr, temp, l, mid);
        inv += m_sort(arr, temp, mid + 1, r);

        inv += m(arr, temp, l, mid + 1, r);
    }

    
    return inv;


}

int inv_m_sort(int arr[], int n) {
    int* temp = new int[n];
    return m_sort(arr, temp, 0, n - 1);
}


