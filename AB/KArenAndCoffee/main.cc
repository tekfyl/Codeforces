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

using namespace std;

vi v,q,st;
int in=0,i=0,j=0,k=0,ans=0;
int n=0,m=0,t=0,v1=0,v2=0;
char c; string s;
int N = 2e5+7, M = 2e5+1; 
vvi g(N); 
vi vis(N,0), app(N,0), dep(N,0);


int main(){
    ios_base::sync_with_stdio(0);
        int q;
        cin >> n >> k >> q;
        rep(i,n){
            cin >> v1 >> v2;
                vis[v1]++; vis[v2+1]--;
        }
        rep(i,M) vis[i+1] = vis[i+1] + vis[i];
        rep(i,M) vis[i] = (vis[i] >= k);
        rep(i,M) vis[i+1] += vis[i]; 
        rep(i,q){
            cin >> v1 >> v2;
            cout << vis[v2] - vis[v1-1] << endl;
        }
    return 0;
}

