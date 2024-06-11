#include <iostream>
#include <vector>
 
using namespace std;
typedef long long ll;
 
ll cal(ll x, ll y, ll z, ll k) {
 
    ll maxEntanglement = 0;
    for (ll i = 1; i <= x; i++) { 
        for (ll j = 1; j <= y; j++) {
            if (k % (i * j) == 0 && (k / (i * j)) <= z) {
                maxEntanglement = max(maxEntanglement, (x - i + 1) * (y - j + 1) * (z - (k / (i * j)) + 1));
            }
        }
    }
    return maxEntanglement; 
}
 

void solve() {
    ll x, y, z, k;
    cin >> x >> y >> z >> k;
    cout << cal(x, y, z, k) << endl; 
}
 
int main() {
    int numTestCases;
    cin >> numTestCases; 
 
    while (numTestCases--) { 
        solve(); 
    }
    return 0;
}