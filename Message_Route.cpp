#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define pr pair<long long,long long>
#define mkp(i,j) make_pair(i,j) 
#define mp unordered_map<long long,long long>
#define ll long long  


bool bfs(vector<vector<int>>&graph,int n,vector<int>&parent,vector<int>&dist){
    queue<int>q;
    q.push(1);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        if(node==n) return true;
        for(auto i : graph[node]){
            if(parent[i]!=-1)
            continue;
           // cout << i << "visited" << endl;
            dist[i] = dist[node]+1;
            parent[i] = node;
            q.push(i);
        }
        //cout << node << "reached" << endl;

    }
    return false;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<vector<int>>graph(n+1);
    vector<int>par(n+1,-1);
    vector<int>dist(n+1,INT_MAX);
    dist[1] = 0;
    par[1] = 0;
    par[0] = -1;
    for(int i = 0;i < m;i++){
        int node1 ,node2;
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);

    }
    if(bfs(graph,n,par,dist)){
        cout << dist[n]+1 << endl;
        int current_parent = n;
        vector<int>ans;
        while(par[current_parent]!= -1){
            ans.push_back(current_parent);
            current_parent = par[current_parent];
        }
        reverse(ans.begin(),ans.end());
        for(auto i : ans){
            cout << i << " ";

        }
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}