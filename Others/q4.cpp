#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Loop through the string //not n-1 because we are checking for the next character
    for (int i = 0; i < s.length(); i++) {
        // Check for the pattern "-."
        if (s[i] == '-' && s[i + 1] == '.') {
            cout << 1;
            i++;
        }
        // Check for the pattern "--"
        else if (s[i] == '-' && s[i + 1] == '-') {
            cout << 2;
            i++;
        }
        // Check for the pattern "."
        else if (s[i] == '.') {
            cout << 0;   
        }
    }

    return 0;
}
