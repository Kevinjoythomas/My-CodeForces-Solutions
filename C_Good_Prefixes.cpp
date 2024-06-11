#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

void solve(){
    int num;
    cin >> num;
    vector<int>nums(num);
    for(int i =0 ;i < num;i++){
        cin >> nums[i];
    }
    int maxi = -1;
    ll sum = 0;
    int ans = 0;
    for(auto i : nums){
        sum+=i;
        if(maxi<i){
            sum-=i;
            if(maxi!=-1)
            sum+=maxi;
            maxi = i;
        }
        if(sum==maxi){
            ans++;
        }
    }
    cout << ans << endl;
}

int main(){
   ll testcases;
   cin >> testcases;
   while(testcases--) solve();
    return 0;
}