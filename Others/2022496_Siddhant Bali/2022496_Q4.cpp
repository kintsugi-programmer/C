#include <bits/stdc++.h>
using namespace std;

const int MAX__ = 100000;
int arr[MAX__];
int RESULT_[MAX__];

void minmax(int arr[], int n);

int main() {
    int N1 ;
    cout << "Enter the size of the ARRAY ,LIGHT YAGAMI ? : ";
    cin >> N1;
    cout << "Enter the elements of the array:\n";
    int i = 0;
    while (i < N1) {
        cin >> arr[i];
        ++i;
    }



    //int n = sizeof(arr) / sizeof(arr[0]);

    minmax(arr, N1);

    for (int I1 = 0; I1 < N1; ++I1) {
        cout << RESULT_[I1] << " ";
    }

    return 0;
}

void minmax(int arr[], int n) {
    for (int I1 = 0; I1 < n; ++I1) {
        int MIN = arr[I1];
        for (int J1 = I1; J1 < n; ++J1) {
            MIN = min(MIN, arr[J1]);
            RESULT_[J1 - I1] = max(RESULT_[J1 - I1], MIN);
        }
    }
}
