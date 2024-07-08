#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

vector<vector<vector<vector<int>>>> memo;

int dp(int curr, vector<int>& ski, vector<int>& movie, vector<int>& boardgame, bool s, bool m, bool b) {
    if (curr >= ski.size()) {
        return 0;
    }
    if (memo[curr][s][m][b] != -1) return memo[curr][s][m][b];
    
    int left = 0, right = 0, middle = 0;
    if (!s) left = ski[curr] + dp(curr + 1, ski, movie, boardgame, true, m, b); 
    if (!m) middle = movie[curr] + dp(curr + 1, ski, movie, boardgame, s, true, b);
    if (!b) right = boardgame[curr] + dp(curr + 1, ski, movie, boardgame, s, m, true);
    
    int no = dp(curr + 1, ski, movie, boardgame, s, m, b);
    return memo[curr][s][m][b] = max({left, middle, right, no});
}

void solve() {
    int n;
    cin >> n;
    
    // Resize the memo vector
    memo = vector<vector<vector<vector<int>>>>(n, vector<vector<vector<int>>>(2, vector<vector<int>>(2, vector<int>(2, -1))));
    
    vector<int> ski(n), movie(n), boardgame(n);
    for (int i = 0; i < n; i++) {
        cin >> ski[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> movie[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> boardgame[i];
    }
    cout << dp(0, ski, movie, boardgame, false, false, false) << endl;
}

int main() {
    ll testcases;
    cin >> testcases;
    while (testcases--) solve();
    return 0;
}
