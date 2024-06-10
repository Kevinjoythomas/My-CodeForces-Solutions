#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define for(i,n) for(int i = 0;i < n;i++)
#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  

void solve(){

}

int main(){
    ll len;
    cin >> len;
    string word;
    cin >> word;
    string sorted = word;
    int left = -1,right=-1;
    sort(all(sorted));
    for(i,word.size()){
        if(word[i]!=sorted[i]){
            left = i;
            right = sorted[i];
            break;
        }
    }
    for(i,word.size()){
        if(i>left && word[i]==right){
            right = i;
        }
    }    
    if(left!=-1 && right!=-1){
        cout << "YES" <<endl;
        cout << left+1 << " " << right+1 << endl;
    }
    else{
        cout << "NO" <<endl;
    
    }
    

    return 0;
}