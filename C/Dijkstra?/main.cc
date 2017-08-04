#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define mk make_pair
#define ii pair <int, int>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
double tick(){static clock_t oldt,newt=clock();double diff=100.0*(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}

using namespace std;

ll inf=1e18+1;  
ll N=222222; 
vll v,st;
ll in=0,i=0,j=0,k=0,ans=0;
ll n=0,m=0,t=0,v1=0,v2=0;
char c; ll s;
vector<vector<ll> > g(N); vll dis(N,inf), vis(N,0), path(N,0);
map<pair<ll, ll>, ll> w;

void Dijkstra(){
        s = 1; dis[s] = 0;
        priority_queue<pair<ll, ll>, vector<pair<ll,ll> >, greater<pair<ll,ll> > > q;
        q.push(mk(dis[s],s));
        while(!q.empty()){
            s = q.top().se; q.pop(); vis[s] = 1;
            for(auto d:g[s]){
                if(!vis[d]){
                    t = dis[s] + w[mk(d,s)];
                    if(dis[d] > t){
                        dis[d] = t;
                        path[d] = s;
                        q.push(mk(t,d));
                    }
                }
            }
        }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    rep(i,m){
        cin >> v1 >> v2 >> t;
        g[v1].pb(v2); g[v2].pb(v1);
        w[mk(v1,v2)] = w[mk(v2,v1)] = t;
    }
    Dijkstra();
    if(dis[n] == inf){
        cout << -1;
    }
    else{
        s = n;
        vll ans;
        while(s != 0){
            ans.pb(s); s = path[s];
        }
        reverse(all(ans));
        for(auto d:ans) cout << d << " ";
    }
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

