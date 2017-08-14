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
int in=0,i=0,j=0,k=0;
ll ans=0;
int n=0,m=0,t=0,v1=0,v2=0;
char c; string s;
int N = 2e5+7, M = 2e5+1; 
vvi g(N); 
vi vis(N,0), app(N,0), dep(N,0);


int main(){
    ios_base::sync_with_stdio(0);
        cin >> n >> k;
        vi a,b;
        rep(i,n) cin >> in, a.pb(in);
        rep(i,n) cin >> in, b.pb(in);
        vector<ii> d;
        rep(i,n){
            d.pb(mk(a[i]-b[i],i));
        }
        sort(all(d));
          for(i=0;i<k;i++){
            ans += a[d[i].se];
        }
        
        while(d[i].fi < 0 && i<n){
            ans += a[d[i].se]; i++;
        }
        for(;i<n; i++){
            ans += b[d[i].se]; 
        }
        cout << ans;
    return 0;
}

