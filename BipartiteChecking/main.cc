#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define LL long long
#define pb push_back
#define vi vector<int>
#define vll vector<LL>
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

void checkBipartite(vector< vi > g, int s){
    // s - starting node - current element - front element of queue
        // q - bfs queue
        // color - -1 for not visited, 0 for in queue, 1 for removed queue
        // level - level on every element

        int i, l=0, m=1;
        vi q, color(g.size(),-1), level(g.size(),-1), bfselements(g.size(),-1); q.pb(s);
                color[s] = 0;
                level[s] = l;
                //cout << level[s] << " "  << s << " ";
                bfselements[m++] = s; 
        while(q.size() != 0){
                s = q.front();
                q.erase(q.begin());
                l++;
                for(i=0; i<g[s].size(); i++){
                    if(color[g[s][i]] == -1){
                        color[g[s][i]] = 0;
                        level[g[s][i]] = l;
                        //cout << level[g[s][i]] << " " << g[s][i] << " ";
                        bfselements[m++] = g[s][i];
                        q.pb(g[s][i]);
                    }
                    else{
                        if(level[s] == level[g[s][i]]){
                            cout << "NO" << endl; return;
                        }
                    }
                }
        }

    cout << "YES" << endl;
}

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n,q;
        cin >> n >> q;
        vector< vi > g(n+1);
        rep(i,q){
            int v1,v2; cin >> v1 >> v2;
            if(find(all(g[v1]), v2) == g[v1].end() && find(all(g[v2]), v1) == g[v2].end()){
                g[v1].pb(v2);
                g[v2].pb(v1);
                cout << "if" << endl;
                checkBipartite(g,v1);
            }
            else{
                g[v1].erase(find(all(g[v1]), v2));
                g[v2].erase(find(all(g[v2]), v1));
                cout << "else" << endl;
                checkBipartite(g, g[1].front());
            }
        }
    return 0;
}

