#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define LL long long
#define pb push_back
#define vi vector<int>
#define vll vector<LL>
#define mk make_pair
#define ii pair <int, int>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

vi v,q,st;
int in=0,i=0,j=0,k=0,ans=0;
int n=0,m=0,t=0,v1=0,v2=0;
char c; string s;
vi cat;
vector< vi > g(n);

void FastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

void dfs(int node, int parent, int cnt){
    int edge = 0;
    if(cnt>m) return; 
    for(int j:g[node]){
        if(j != parent){
            edge++;
            dfs(j, node, cat[node]*(cnt+cat[node]));
        }
    }
    edge == 0 ? ans++:1;
}

int main(){
    FastIO();
        cin >> n >> m;
        rep(i,n) cin >> in, cat.pb(in);
        rep(i,n-1){
            cin >> v1 >> v2; v1--; v2--;
            g[v1].pb(v2); g[v2].pb(v1);
        }
        dfs(1, 0, cat[0]);
        cout << ans;
    return 0;
}

