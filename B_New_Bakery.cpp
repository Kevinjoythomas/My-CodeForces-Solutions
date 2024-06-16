#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

   void solve() {
        ll n,a,b;   cin>>n>>a>>b;
        ll k = (b-a);   if(k<0) k=0;
        if(k>n) k=n;
        ll sm = (2*b-k+1);
        sm=(k*sm)/2;
        n-=k;
        if(n>0) sm+=n*a;
        cout<<sm<<endl;
    }
 

int main(){
   ll testcases;
   cin >> testcases;
   while(testcases--) solve();
    return 0;
}