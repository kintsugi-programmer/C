#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Input */
    int n, sex = 0;//no garbage value
    cin >> n;
    vector<int> v1(n); //correct format

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v1[i] = x;
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v1[j] > v1[j + 1]) {
                int temp = v1[j];
                v1[j] = v1[j + 1];
                v1[j + 1] = temp;
                sex++;
            }
        }
    }

    cout << sex << endl;

    return 0;
}
