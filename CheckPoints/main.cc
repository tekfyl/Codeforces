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
    int n,in,a;
    cin >> n >> a;
    if(n==1){cout <<0; return 0;}
    vi v;
    rep(i,n){
        cin >> in;
        v.pb(in);
    }
    sort(all(v));
    int sum=98765432;
    sum = min(sum, abs(a-v[0])+abs(v[0]-v[n-2]));
    sum = min(sum, abs(a-v[1])+abs(v[1]-v[n-1]));
    sum = min(sum, abs(a-v[n-1])+abs(v[n-1]-v[1]));
    sum = min(sum, abs(a-v[n-2])+abs(v[n-2]-v[0]));
    cout << sum;
    return 0;
}

