#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

void solve(){
    string a,b;
    cin >> a;
    cin >> b;
    swap(a[0],b[0]);
    cout << a << " " << b << endl;
}

int main(){
   ll testcases;
   cin >> testcases;
   while(testcases--) solve();
    return 0;
}