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
        int n,t;
        string a,b,d;
        cin >> a >> b >> d;
        vi f(100,0); v.resize(100,0);
        for(auto c:a){
            v[c]++;
        }
        for(auto c:b){
            v[c]++;
        }
        for(auto c:d){
            f[c]++;
        }
        (f == v) ? cout << "YES" : cout << "NO";
    return 0;
}

