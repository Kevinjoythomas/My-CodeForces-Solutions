#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

void solve(){
    long long int health, n;
        cin >> health >> n;
 
        vector<long long int> damage(n);
        vector<long long int> cool(n);
        for (int i = 0; i < n; ++i) {
            cin >> damage[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> cool[i];
        }
 
        priority_queue<pair<long long int, int>, vector<pair<long long int, int>>, greater<pair<long long int, int>>> pq;
 
        for (int i = 0; i < n; ++i) {
            pq.push(make_pair(1, i)); 
        }
 
        long long int top = 0;
        while (!pq.empty() && health > 0) {
                top = pq.top().first; 
 
                int thud = pq.top().second;
                pq.pop();
 
                health -= damage[thud]; 
 
                pq.push(make_pair(top + cool[thud], thud));
            
        }
 
        cout << top << endl;
    }


int main(){
   ll testcases;
   cin >> testcases;
   while(testcases--) solve();
    return 0;
}