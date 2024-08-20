#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

int main(){
    ll number;
    cin >> number;
    ll sum = (number*(number+1))/2;
    if(sum%2==1){cout << "NO";return 0;};
    ll mid = sum/2;
    vector<ll>first_half,second_half;
    for(int i = number;i>=1;i--){
        if(mid>=i){
            first_half.push_back(i);
            mid-=i;
        }
        else{
            second_half.push_back(i);
        }
    }
    cout << "YES" << endl;
    cout << first_half.size() << endl;
    for(auto i : first_half){
        cout << i << " ";
    }
    cout << " " << endl;
    cout << second_half.size() << endl;

    for(auto &i : second_half) {
        cout << i << " ";
    }
    return 0;



}