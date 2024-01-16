#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int number = n+1;//Strictly greater than n
    while (true)
    {
        string s = to_string(number);
        /* code */
        if (s[0] == s[1] || s[0] == s[2] || s[0] == s[3] || s[1] == s[2] || s[1] == s[3] || s[2] == s[3]){
            number++;
        }
        else{
            cout << number;
            break;

        }
    }
    
    


}