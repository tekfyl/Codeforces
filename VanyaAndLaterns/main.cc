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
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

vi v;
int in;

int main(){
    std::ios_base::sync_with_stdio(false);
        int n,t,l;
        cin >> n >> l;
        vector<double> lat;
        rep(i,n){
            cin >> in; lat.pb(in); 
        }
        vector<double> latdiff;
        sort(all(lat));
        latdiff.pb(lat[0]-0);
        rep(i,n-1){
            latdiff.pb((lat[i+1]-lat[i])/2);
        }
        latdiff.pb(l-lat.back());
        printf("%.9lf", *max_element(all(latdiff)));
    return 0;
}

