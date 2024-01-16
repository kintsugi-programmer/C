#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Loop through the string
    for (int i = 0; i < s.length() - 1; i++) {
        // Check for the pattern "-."
        if (s[i] == '-' && s[i + 1] == '.') {
            cout << 1;
            i++;
        }
        // Check for the pattern "--"
        else if (s[i] == '-' && s[i + 1] == '-') {
            cout << 2;
            
        }
        // Check for the pattern "."
        else if (s[i] == '.') {
            cout << 0;   
        }
        
    }

    return 0;
}
