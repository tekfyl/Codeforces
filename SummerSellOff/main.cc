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


int n,k,j;
ll ans = 0;
ll t;
ll inf = 777777777777777777;
int main(){
    int  days;
    cin >> n >> days;
    vector<int> v;
    rep(i,n){
        cin >> j >> k;
        ans += min(j,k);
        v.pb(max(0, min(j, k-j)));
    }
    sort(all(v));
    reverse(all(v));
    //for(auto c:v) cout << c.se.fi << " " << c.se.se << endl;
    for(int i=0; i<min(days, n); i++){
        ans += v[i];
    }
    cout << ans;
    return 0;
}

