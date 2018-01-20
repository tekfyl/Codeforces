#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define vvl vector< vector<ll> >
#define mk make_pair
#define ii pair <int, int>
#define LL pair <ll, ll>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
using namespace std;

int N = 100005;
vvi g(N);
vi vis(N,0);
vvi output(N);
int ans=0;

void dfs(int i){
    vis[i] = 1;
    output[ans].pb(i);
    for(int v:g[i]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

int main(){
    int n;
    cin >> n;
    vi sorted;
    map<int,int> m;
    int in;
    rep(i,n){ 
        cin >> in;
        sorted.pb(in);
        m[in] = i;
    }
    sort(all(sorted));

    rep(i,n){
        g[i].pb(m[sorted[i]]);
        g[m[sorted[i]]].pb(i);
    }
    ans=-1;
    rep(i,n){
        if(vis[i] == 0){
            ans++;
            dfs(i);
        }
    }
    ans++;
    cout << ans << endl;
    for(int i=0; i<ans; i++){
        cout << output[i].size() << " ";
        for(auto c:output[i]){
            cout << c+1 << " ";
        }
        cout << endl;
    }
    return 0;
}
