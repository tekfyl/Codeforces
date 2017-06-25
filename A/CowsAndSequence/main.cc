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
        v.pb(0);
        cin >> n;
        while(n--){
            cin >> t;
            if(t==2){
                cin >> in; v.pb(in);
            }
            else if(t==3) v.pop_back();
            else{
                int a,x; cin >> a >> x;
                rep(i,a){
                    v[i] += x;
                }
            }
            printf( "%.6lf\n" ,(static_cast<double>(accumulate(all(v), 0))/v.size()));
        }
    return 0;
}

