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
int in=0,i=0,j=0,k=0,ans=0;
int n=0,m=0,t=0,v1=0,v2=0;
char c; string s;








int main(){
    std::ios_base::sync_with_stdio(false);
        cin >> n;
        vi oi, ti, thi;
        rep1(i,n){
            cin >> in;
            in == 1 ? oi.pb(i) : in == 2? ti.pb(i) : thi.pb(i);
        }
        t = min(thi.size(), min(ti.size(), oi.size()));
        cout << t << endl;
        rep(i,t){
            cout << oi[i] << " " << ti[i] << " " << thi[i] << endl;
        }
    return 0;
}

