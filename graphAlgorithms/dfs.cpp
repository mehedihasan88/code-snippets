#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MAX_NODE 100000
vector <int> adj[MAX_NODE+1];
bool visited[MAX_NODE+1];
void dfs(int s) {
    visited[s] = 1;
    for(int x : adj[s]) {
        if(not visited[x]) {
            dfs(x);
        }
    }
}
int32_t main() {
    int ntest;cin>>ntest;
    while(ntest--) {
        int n_node;cin>>n_node;
        int n_edge;cin>>n_edge;
        for(int i = 1; i <= n_edge; i++) {
            int x,y;cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int cnt_dfs_tree = 0;
        for(int i = 1; i <= n_node ; i++) {
            if(not visited[i]) dfs(i),cnt_dfs_tree++;
        }
        cout<<cnt_dfs_tree<<endl;
    }

}
