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
int N = 10000000;

int main(){
    std::ios_base::sync_with_stdio(false);
        int n,t;
        cin >> n;
        vll f(N,0);
        rep(i,n){
            cin >> in;
            f[in]++;
        }
        vll g(N,0);
        g[1] = f[1];
        for(LL i=2; i<N; i++){
            g[i] = max(g[i-1],g[i-2] + (LL)i*f[i]);
        }
        cout << *max_element(all(g)) << endl;
    return 0;
}

