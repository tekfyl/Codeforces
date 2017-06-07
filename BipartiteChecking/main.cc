#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define LL long long
#define pb push_back
#define vi vector<int>
#define vll vector<LL>
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

bool is_bipartite(vector< vector<int> > &graph) {
    int n = graph.size();
    vector<int> side(n, 0);
    queue<int> q;
    side[0] = 1; // left
    q.push(0);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (auto &neighbour : graph[node]) {
            if (!side[neighbour]) {
                side[neighbour] = - side[node];
                q.push(neighbour); 
            } else if (side[neighbour] == side[node]) {
                return false; 
            }
        } 
    }
    return true; 
} 

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n,q;
        cin >> n >> q;
        vector< vi > g(n);
        rep(i,q){
            int v1,v2; cin >> v1 >> v2; v1--; v2--;
            if(find(all(g[v1]), v2) == g[v1].end() && find(all(g[v2]), v1) == g[v2].end()){
                g[v1].pb(v2);
                g[v2].pb(v1);
            }
            else{
                g[v1].erase(find(all(g[v1]), v2));
                g[v2].erase(find(all(g[v2]), v1));
            }
            cout << (is_bipartite(g) ? "YES" : "NO") << endl;
        }
    return 0;
}

