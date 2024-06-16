#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long

class SGTree{
    public: 
    vector<ll>seg;
    SGTree(ll n){
        seg.resize(4*n+1);
    }
    void build(ll i,ll low,ll high,vector<ll>& arr,ll flag){
        if(low==high){
            seg[i] = arr[low]; 
            return;

        }
        ll mid = low + (high-low)/2;
        build(2*i+1,low,mid,arr,!flag);
        build(2*i+2,mid+1,high,arr,!flag);
        if(flag)
        seg[i] = seg[2*i+1] | seg[2*i+2];
        else
        seg[i] = seg[2*i+1] ^ seg[2*i+2];

    }
    ll query(ll i,ll low,ll high,ll l,ll r,ll flag){
        if(r < low || high <l ){
            return 0;
        }
        if(low >=l && high <= r) return seg[i];

        ll mid = low + (high-low)/2;
        ll left = query(2*i+1,low,mid,l,r,!flag);
        ll right = query(2*i+2,mid+1,high,l,r,!flag);
        if(flag)
        return left | right;
        else
        return left ^ right;
    }
    void update(ll i, ll low, ll high, ll target, ll val,ll flag){
        if (low == high) {
            seg[i] = val;
            return;
        }

        ll mid = low + (high - low) / 2;
        if (target <= mid) {
            update(2 * i + 1, low, mid, target, val,!flag);
        } else {
            update(2 * i + 2, mid + 1, high, target, val,!flag);
        }
        if(flag)
        seg[i] = seg[2*i+1] | seg[2*i+2];
        else
        seg[i] = seg[2*i+1] ^ seg[2*i+2];
    }
};

void solve(){
    ll n,m;
    cin >> n >> m;
    int temp = n;
    n = pow(2,n);
    vector<ll>nums(n);
    for(ll i = 0;i < n;i++){
        cin >> nums[i];
    }
   
    SGTree node(n);
    if(temp%2==0)
    node.build(0,0,n-1,nums,0);
    else
    node.build(0,0,n-1,nums,1);

    for(ll i = 0;i < m;i++){
        ll a, b;
        cin >> a >>b;
        if(temp%2==0)
        node.update(0,0,n-1,a-1,b,0);
        else
        node.update(0,0,n-1,a-1,b,1);

        cout << node.seg[0] << endl;
    }
}

int main(){
   ll testcases;
   
   solve();
    return 0;
}