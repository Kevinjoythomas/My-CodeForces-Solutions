#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,lightCount;
    cin >> n >> lightCount;
    multiset<int>lengths;
    set<int>positions;
    positions.insert(0);
    positions.insert(n);
    lengths.insert(n-0);
    for(int i =0 ;i < lightCount;i++){
        int currentPosition;
        cin >> currentPosition;
        positions.insert(currentPosition);
        auto iter = positions.find(currentPosition);
        int previousPosition = *prev(iter);
        int nextPosition = *next(iter);
        lengths.erase(lengths.find(nextPosition-previousPosition));
        lengths.insert(currentPosition-previousPosition);
        lengths.insert(nextPosition-currentPosition);
        cout << *lengths.rbegin() << " ";


    }
    return 0;
}
