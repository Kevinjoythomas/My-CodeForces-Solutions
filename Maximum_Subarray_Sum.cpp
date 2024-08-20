#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  



int main(){
   ll length;
   cin >> length;
   vector<int>arr;
   while(length--) {int num;
   cin >> num;
   arr.push_back(num);
   }
   ll curr_sum = 0;
   ll max_sum = INT_MIN;
   for(auto i : arr){
    curr_sum+=i;
    max_sum = max(max_sum,curr_sum);
    if(curr_sum<0) curr_sum = 0;

   }
   cout << max_sum << endl;
    return 0;
}