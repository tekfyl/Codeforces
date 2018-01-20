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
    int n,prev=-1,in; ll ans=0;
    cin >> n;
    vi v;
    rep(i,n) cin >> in, v.pb(in);
    sort(all(v), greater<int>());
    ans = prev = v[0];
    rep1(i,n-1){
        if(prev <= v[i]){
            v[i] = prev-1;
        }
        if(v[i] <= 0) break;
        ans += v[i];
        prev = v[i];
    }
    cout << ans;
    return 0;
}

