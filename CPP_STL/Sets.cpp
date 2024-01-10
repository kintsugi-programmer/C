#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);

    // Create a copy of the set to avoid issues when erasing elements during for loop
    set<int> s_copy = s;

    for (int x : s_copy) {
        cout << x << " ";
        s.erase(x);
        cout << s.count(x) << "\n";
    }

    return 0;
}
