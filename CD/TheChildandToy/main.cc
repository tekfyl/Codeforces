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


int in=0,i=0,j=0,k=0;
ll ans=0;
int n=0,m=0,t=0,v1=0,v2=0;
char c; string s;
int N = 2e5+7, M = 2e5+1; ll inf=1e18+1;  
vvi g(N); 
vi vis(N,0), app(N,0), dep(N,0);
int maxn = 10000;
vi v(maxn);

int main(){
    ios_base::sync_with_stdio(0);
        cin >> n >> m;
        rep1(i,n) cin >> v[i];
        rep(i,m){
            cin >> j >> k;
            ans += min(v[j],v[k]);
        }
        cout << ans;
    return 0;
}

