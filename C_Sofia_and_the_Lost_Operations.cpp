#include<bits/stdc++.h>
using namespace std;


//#define for(i,n) for(int i = 0;i < n;i++)
#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> b(n);
        for (long long i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long n1;
        cin >> n1;
        vector<long long> d(n1);
        for (long long i = 0; i < n1; i++) {
            cin >> d[i];
        }

        map<long long, long long> hmap;
        for (const auto &num : d) {
            hmap[num]++;
        }
        bool found = false;
        long long target = d.back();
        for(int i = 0;i < a.size();i++){
            if(b[i]==target){
                found = true;
                break;
            }
        }

        for (long long i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                hmap[b[i]]--;
                if(hmap[b[i]]<0){
                found = false;
                break;}
            }
        }
        if(found)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;


        }
}



