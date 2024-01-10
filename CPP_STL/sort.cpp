#include "bits/stdc++.h"
using namespace std;

// most efficient way to sort a vector
/*

mix of 3 algos : quicksort, heapsort, insertion sort

sort(pointer to 1st element, pointer to last element + 1)

This function can be used to sort an array or a vector or a string. 
The underlying sorting algorithm is called the gcc_sort which is a hybrid algorithm which is implemented in a very efficient way. 
O(NlogN)
If you manually write a sorting algorithm, it’ll be slower than this.
Usage:

*/
void func(){
int a[13]={1,2,10,9,1,3,4,5,6,7,8,9,10};
sort(a,a+14);
//sort(pointer to 1st element, pointer to last element + 1)

for (int i = 0; i < 10; ++i)
{
    cout<<a[i]<<" ";
}

vector<int> v;
sort(v.begin(),v.end());

string s;
sort(s.begin(),s.end());
}

int main(int argc, char const *argv[])
{   func();
    /* code */
    return 0;
}

//Note: begin() and end() are called iterators, we’ll discuss them later. In short, they’re a little bit similar to pointers.
