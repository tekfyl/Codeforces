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

int main(){
    int n,m;
    cin >> n >> m;
    vvi v(52, vi(52));
    rep1(i,n){
        rep1(j,m){
            cin >> v[i][j];
        }
    }
    vll pp;
    pp.pb(1);
    rep1(i,50) pp.pb(pp[i-1]*2);
    ll a;
    vll e1(67),e2(67);
    rep1(i,n){
        a=0;
        rep1(j,m){
            a+=v[i][j];
        }
        e1[i]=a;
    }
    rep1(i,m){
        a=0;
        rep1(j,n){
            a+=v[j][i];
        }
        e2[i]=a;
    }
    ll ans=0;
    rep1(i,n){
        ans += pp[e1[i]]-1;
        ans += pp[m-e1[i]]-1;
    }
    rep1(i,m){
        ans += pp[e2[i]]-1-e2[i];
        ans += pp[n-e2[i]]-1-(n-e2[i]);
    }
    cout << ans;
    return 0;
}

