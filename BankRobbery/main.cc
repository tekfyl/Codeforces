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









map<int, int> v;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cin >> a;
    ll  ans=0;
    rep(i,a){
        int in;
        cin >> in;
        if(in > b && in < c) ans++;
    }
    cout << ans;
    return 0;
}

