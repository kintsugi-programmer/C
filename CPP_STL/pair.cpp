#include <bits/stdc++.h>
using namespace std;
pair <int, int> pq() {
    return {1, 2};
}



int main(){
cout<<pq().first<<" "<<pq().second<<endl; // 1 2
//Pair is a way of creating a Composite-Datatype composed of 2 different primitive/composite datatypes.
pair<int,int> p1; // a pair of 2 ints
pair<int,string> p2; // a pair of an int and a string
pair<int,pair<int,string>> p3; // a pair of int and (pair of int and string)
pair<vector<int>,string> p4; // a pair of a (vector of int) and a string
//complexity of pairs does not matter as they are not containers, they are just a way of storing 2 different datatypes together. 
        //Access elements using .first and .second
pair<string, int> p5 = {"hello", 6}; // ",not ', for strings
cout << p5.first << ""  << p5.second; // prints: hello 6
}

// Advantages:
// In case, you want to return multiple values from a function.
// (see next slide for the main advantage)
// Disadvantages:
// You can only store 2 values in a pair.
// You cannot store different datatypes in a pair.
// You cannot store multiple values in a pair.
// You cannot store a pair in a pair.
// You cannot store a vector in a pair.
// You cannot store a pair in a vector.
// You cannot store a pair in a map.
// You cannot store a map in a pair.
// You cannot store a pair in a set.
// You cannot store a set in a pair.