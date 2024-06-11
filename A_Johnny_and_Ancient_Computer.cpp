#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

void solve(){
    ll a;
    cin >> a;
    ll b;
    cin >>b;
    ll ans = 0;
    if(a>b){
        int count =0;
        while(a>b){
            b*=2;
            ans++;
            count++;
            if(count==2){
                ans--;
            }
            else if(count==3){
                ans--;
                count=0;
            }
        }
    }
    else{
        int count = 0;
        while(a<b){
            a*=2;
            ans++;
            count++;
            if(count==2){
                ans--;
            }
            else if(count==3){
                ans--;
                count=0;
            }
        }
    }
    if(a==b){
        cout << ans << endl;
    }
    else{
        cout << -1 << endl;
    }
}

int main(){
   ll testcases;
   cin >> testcases;
   while(testcases--) solve();
    return 0;
}