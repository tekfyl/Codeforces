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
//char c; string s;
int N = 2e5+7, M = 2e5+1; 
vvi g(N); 
vi vis(N,0), app(N,0), dep(N,0);
ll inf = 1e18;


int main(){
    ios_base::sync_with_stdio(0);
        cin >> n;
        vi c(n);
        rep(i,n){
            cin >> c[i];
        }
        vector<string> s,r;
        rep(i,n){
            string h,hh;
            cin >> h; s.pb(h);
            hh = h; reverse(all(hh));
            r.pb(hh);
        }
        vector<vector<ll> > dp(n, vector<ll>(2, inf));
        dp[0][0] = 0; dp[0][1] = c[0];
        rep1(i,n-1){
            if(s[i]>=s[i-1]) dp[i][0] = min(dp[i][0], dp[i-1][0]);
            if(s[i]>=r[i-1]) dp[i][0] = min(dp[i][0], dp[i-1][1]);
            if(r[i]>=s[i-1]) dp[i][1] = min(dp[i][1], dp[i-1][0] + c[i]);
            if(r[i]>=r[i-1]) dp[i][1] = min(dp[i][1], dp[i-1][1] + c[i]);
        } 
        ll ans = min(dp[n-1][0], dp[n-1][1]);
        ans == inf ? cout << -1:cout << ans;
    return 0;
}

