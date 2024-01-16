#include <iostream>
using namespace std;

void stepc(int i, int j) {
    cout << abs(2 - i) + abs(j - 2);
}

int main() {

    for (int i = 0; i < 5; i++) {
        int n1, n2, n3, n4, n5;
        cin >> n1 >> n2 >> n3 >> n4 >> n5;

        if (1 == n5) {
            stepc(i, 4);
        } else if (1 == n4) {
            stepc(i, 3);
        } else if (1 == n3) {
            stepc(i, 2);
        } else if (1 == n2) {
            stepc(i, 1);
        } else if (1 == n1) {
            stepc(i, 0);
        }
    }

    return 0;
}
