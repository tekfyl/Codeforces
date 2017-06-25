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
        int n,t,s,e;
        LL time=0;
        cin >> n >> s >> e;
        vi x,a,b,c,d;
        x.pb(0); a.pb(0); b.pb(0); c.pb(0); d.pb(0);
        rep(i,n){
            cin >> in; x.pb(in);
        }
        rep(i,n){
            cin >> in; a.pb(in);
        }
        rep(i,n){
            cin >> in; b.pb(in);
        }
        rep(i,n){
            cin >> in; c.pb(in);
        }
        rep(i,n){
            cin >> in; d.pb(in);
        }
        int currpos = s;
        vi vis(n+1,0);
        while(currpos != e){
            cout << currpos << endl;
                LL t1, t2, t3;
                if(count(all(vis),0) == 2){
                    time += abs(x[currpos]-x[e]) + min( c[currpos] + b[e], a[currpos] + d[e]);
                    currpos = e;
                    vis[e] = 1;
                }
                else {
                    vll store;
                    rep1(j,n){
                        if(j == e) continue;
                        if(vis[j] == 0){
                                store.pb(abs(x[currpos] - x[j]) + c[currpos] + b[j]);
                                store.pb(abs(x[currpos] - x[j]) + a[currpos] + d[j]);
                        }
                    }
                    time += *min_element(all(store));
                    vis[distance(store.begin(), min_element(all(store)))/2] = 1;
                    currpos = distance(store.begin(), min_element(all(store)));
                    store.clear();
                }
        }
        cout << time;
    return 0;
}

