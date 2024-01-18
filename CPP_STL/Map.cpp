// You can think of these as special arrays in which the indices(keys) of elements can be negative or very big or even strings! These are like python-dictionaries. (In Java same behaviour is shown by TreeMap).
// map<key_datatype, value_datatype> m;
// map<string, int> m; // defines a map in which the keys of elements are strings

// Now we can use it like:
// m[“hello”] = 50;
// m[“world”] = 12;
// cout << m[“hello”] << “ “ << m[“world”]; // 50 12

// map<int,int> m;
// m[-234] = 49; // negative ints are also valid as keys

// NOTE: Maps are very similar to sets, in sets the values are unique and sorted, in maps, the keys are unique and sorted

// Very common use-case: Count frequency of various objects

#include <bits/stdc++.h>
using namespace std; // This is a header file which includes every standard library
map<string, int> m;
int main()
{
    cout << m["hello"] << endl; // 0 (default value). If the key is not present and still called for use, it will be inserted with default value
    int n;
    cout << "Enter number of strings: ";
    cin >> n; // number of strings
    for (int i = 0; i < n; i++)
    {
        string s;
        // cin >> s;
        cout << "Enter string: ";
        if (i == 0)
            cin.ignore(); // to ignore the newline character
        getline(cin, s);
        m[s]++;
    }
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    cout << "Size of map :"<<m.size()<<endl;
    return 0;

}

// Some important functions:
// m.clear() - Clears a map
// m[key] - value of element with key. O(logN)
// m.count(key), m.find(key), m.erase(key),
// m.lower_bound(key), m.upper_bound(key) - similar to set

// Map Iterators behave similar to set iterators, but upon doing *it you instead of getting the value, you get a pair of {key, value}

// Examples:
// map<string, double> m;
// insert values in map
// auto it = m.find(“utkarsh”);
// pair<string, double> p = *it; // {“utkarsh”, m[“utkarsh] }

// BONUS:
// (*it).first and (*it).second
// Can instead be written as
// it -> first
// it -> second

