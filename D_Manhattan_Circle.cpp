#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

void solve(){
    int h,w;
    cin >> h;
    cin >> w;
    vector<vector<char>>graph(h,vector<char>(w));
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            cin >> graph[i][j];
        }
    }
    int first_row = w,last_row = -1;
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            if(graph[i][j] == '#'){
                if(first_row>j)
                    first_row = j;
                if(last_row<j)
                    last_row = j;
            }    
        }
    }
    int first_col = h,last_col = -1;

    for(int i = 0;i < w;i++){
        for(int j = 0;j< h;j++){
            if(graph[j][i]=='#'){
                if(first_col>j){
                    first_col = j;
                }
                if(last_col<j)
                    last_col = j;
            }
        }
    }
    int ansrow = (last_row-first_row)/2+first_row+1;
    int anscol = (last_col-first_col)/2+first_col+1;
    cout << anscol << " "<< ansrow << endl;

}

int main(){
   ll testcases;
   cin >> testcases;
   while(testcases--) solve();
    return 0;
}