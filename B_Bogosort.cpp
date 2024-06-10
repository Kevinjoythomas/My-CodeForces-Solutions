#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

void solve(){
    int n;
    cin >> n;
    vector<int>nums(n);
    for(int i =0 ;i < n;i++){
        cin >> nums[i];
    }
    sort(all(nums));
    reverse(all(nums));
    for(auto i : nums){
        cout << i << " ";
    }
    cout <<"" << endl;
    return;
}

int main(){
   ll testcases;
   cin >> testcases;
   while(testcases--) solve();
    return 0;
}