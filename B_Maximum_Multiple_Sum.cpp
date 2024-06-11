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
    pr ans = mkp(num,num);
    for(int i =2;i <= num;i++){
        int sum = 0;
        for(int k = 1;k < num;k++){
            if(i*k>num){
                break;
            }
            sum+=i*k;
        }
        if(ans.second<sum){
            ans = mkp(i,sum);
        }
    }
    cout << ans.first << endl;
}

int main(){
   ll testcases;
   cin >> testcases;
   while(testcases--) solve();
    return 0;
}