#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

void solve(){
    int a,b;
    cin >> a ;
    cin >> b;
    if((abs(a-b)==0 && a%3==0) || abs(a-b)==1) cout << "YES" << endl;
    else cout << "NO" << endl;
}


int main(){
   ll testcases;
   cin >> testcases;
   while(testcases--) solve();
    return 0;
}