#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  
ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
#define MOD 10000000007
void solve(){
    int l,r,x;
    cin >> l >> r >> x;
 

    ll ans = (binpow(x, r, MOD) - binpow(x, l, MOD) + MOD) % MOD;
    cout << ans << '\n';
    }


int main(){
   ll testcases;
   cin >> testcases;
   while(testcases--) solve();
    return 0;
}