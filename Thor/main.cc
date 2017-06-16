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
        int n,t,m,a,k=0;
        cin >> n >> m;
        vi f(n,0);
        rep(i,m){
            int sum = 0;
            cin >> t;
            if(t == 1){
                cin >> in; in--;
                f[in]++; v.pb(in);
            }
            else if(t == 2){
                cin >> in; in--;
                f[in] = 0;
            }
            else {
                cin >> in;
                for(int i=0; i<in; i++){
                    f[v[i]] = 0;
                }
            }
            for(auto c:f) sum += c;
            cout << sum << endl;
        }
    return 0;
}

