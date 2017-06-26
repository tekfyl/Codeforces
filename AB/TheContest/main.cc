#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define LL long long
#define PB push_back
#define vi vector<int>
#define vll vector<LL>
#define REP(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define REP1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        LL i,n,m,sum;
        cin >> n;
        vi a;
        REP(i,n){
            int in; cin >> in; a.PB(in);
        }
        sum = accumulate(all(a), 0);
        cin >> m;
        vll l,r;
        REP(i,m){
            int ll, rr; cin >> ll >> rr;
            l.PB(ll); r.PB(rr); 
        }   
            int flag = 0;
            for(i=0; i<m; i++){
                if(sum <= r[i]) { cout << max (l[i], sum); return 0; };
            }
            cout << -1;
    return 0;
}
