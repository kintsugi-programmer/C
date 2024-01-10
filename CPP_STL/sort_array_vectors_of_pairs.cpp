#include<bits/stdc++.h> 
using namespace std;

int main(int argc, char const *argv[])
{
//    Say we have an array of pairs.
pair<int,int> p[5]; // an array of 5 pairs
p[0] = {1,2};  p[1] = {5,2};  p[2] = {8,1};  p[3] = {1,0};  p[4] = {3,4};
//Let’s sort this array:
sort(p,p+5);
//Now the array looks like:
//[{1,0}, {1,2}, {3,4}, {5,2}, {8,1}]
//Sorting is done in a way that the ordering is done by the “first” element, but wherever the “first” is equal, the ties are broken by comparing second.
//Try this question:
//Given a list of names and scores of students, print the names of students in decreasing order of scores.

    return 0;
}
