#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

void solve(){
    int n,x;
    cin >> n;
    cin >> x;
    vector<int>nums(n);
    for(int i = 0;i < n;i++){ 
        cin >> nums[i];
    }
    int count = 0 ;
    int change = -1;
    int mini  = nums[0]-x;
    int maxi = nums[0]+x;
    for(int i =1 ;i < nums.size();i++){
        int newmini = nums[i]-x;
        int newmaxi = nums[i]+x;
        if(mini <=newmaxi && maxi >=newmini){
            mini = max(mini,newmini);
            maxi = min(maxi,newmaxi);
        }
        else{
            count++;
            mini = newmini;
            maxi = newmaxi;
        }
    }
    cout << count << endl;
    return;
}


int main(){
   ll testcases;
   cin >> testcases;
   while(testcases--) solve();
    return 0;
}