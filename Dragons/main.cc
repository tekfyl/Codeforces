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
        int n,t,s;
        cin >> s >> n;
        vector< ii > p;
        rep(i,n){
            cin >> in; int in2; cin >> in2;
            p.pb(mk(in,in2));
        }
        sort(all(p));
        rep(i,n){
            if(s>p[i].fi){
                s = s + p[i].se;
            }
            else {
                cout << "NO"; return 0;
            }
        }
        cout << "YES";
    return 0;
}

