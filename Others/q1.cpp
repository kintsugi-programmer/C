
#include<bits/stdc++.h>
using namespace std;

int main() {
    int time, no1, no2, no3, no4 = 0, no5 = 0, no6 = 0;
    //vector<vector<int>> v; // Using a vector of vectors to store the sets of three integers
    cin >> time;

    for (int i = 0; i < time; i++) {
        cin >> no1 >> no2 >> no3;
        no4+=no1;
        
        no5+=no2;
        no6+=no3;
           //v.push_back({no1, no2, no3}); // Use curly braces to create a vector with three elements
    }
    
    
    if(no4 ==0 && no5==0 && no6==0) cout<<"YES";
    else cout<<"NO";
    

    // // Display the entered vectors
    // cout << "Entered Vectors:" << endl;
    // for (int i = 0; i < v.size(); i++) {
    //     for (int j = 0; j < v[i].size(); j++) {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    

/*
Initializing variables to zero is a good practice because it ensures that the variables start with a known value. In C++, the values of uninitialized variables are undefined, meaning they could contain any value, including garbage values.

By initializing variables to zero, you start with a clean slate, and it helps prevent unexpected behavior caused by using variables without assigning them a value. In the context of your program, initializing `no4`, `no5`, and `no6` to zero before the loop ensures that they don't have any previous values that might interfere with the accumulation of forces inside the loop.

It's a good habit to initialize variables before using them, especially when you rely on their accumulated values, as it helps in writing more reliable and bug-free code.
*/

    return 0;
}
