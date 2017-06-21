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
int in,i,j,k;
int n,m,t,v1,v2;

int main(){
    std::ios_base::sync_with_stdio(false);
        cin >> n;
        vi a,b,c;
        rep(i,n) cin >> in, a.pb(in);
        rep(i,n-1) cin >> in, b.pb(in);
        rep(i,n-2) cin >> in, c.pb(in);
        cout << accumulate(all(a),0) - accumulate(all(b),0) << endl << accumulate(all(b),0) - accumulate(all(c),0);
    return 0;
}

