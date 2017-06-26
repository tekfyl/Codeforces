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

int in;

int main(){
    std::ios_base::sync_with_stdio(false);
        int n,t;
        cin >> n >> t;
        vi v;
        for(int i = 1; i<n; i++){
            cin >> in; v.pb(in);
        }
        for(int i=1; i<n+1; i+=v[i-1]){
            if(i == t) { cout << "YES"; return 0; }
            if(i>t) break;
        }
        cout << "NO";
    return 0;
}

