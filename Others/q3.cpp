#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input variables
    int n, t;
    cin >> n >> t;  // Read the number of children and the time

    string s;
    cin >> s;  // Read the initial arrangement of children

    // Perform the rearrangement simulation for t seconds
    for (int j = 0; j < t; j++) {
        // Iterate through the string to swap boys and girls based on the given conditions
        for (int i = 0; i < n - 1; i++) {
            // Check if the current position has a boy ("B") and the next position has a girl ("G")
            if (s[i] == 'B' && s[i + 1] == 'G') {
                // Swap the positions of the boy and girl
                swap(s[i], s[i + 1]);
                i++;  // Skip the next element as it has already been swapped
            }
        }
    }

    // Output the final arrangement after the required time
    cout << s;

    return 0;
}
