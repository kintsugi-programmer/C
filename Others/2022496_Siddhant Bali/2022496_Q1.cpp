#include <bits/stdc++.h>

using namespace std;

void towerOfHanoi(int i, char t1, char t4, char t2, char t3) {
    if (i == 0) {
        return;
    }
    if (i == 1) {
        cout << "T" << t1 << " -> " <<  "T" << t4 << endl;
        return;
    }
    towerOfHanoi(i - 2, t1, t2, t3, t4);
    cout << "T" << t1 << " -> " <<  "T" << t3 << endl;
    cout << "T" << t1 << " -> " <<  "T" << t4 << endl;
    cout << "T" << t3 << " -> " <<  "T" << t4 << endl;
    towerOfHanoi(i - 2, t2, t4, t1, t3);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    char t1 = 'T1', t4 = 'T4', t2 = 'T2', t3 = 'T3';
    
    cout << "The sequence of steps are: " << endl;
    towerOfHanoi(n, t1, t4, t2, t3);
    return 0;
}