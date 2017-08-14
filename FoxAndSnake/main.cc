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
        int n,t,flag=1;
        cin >> n >> t;
        rep1(i,n){
            if(i%2){
                rep1(j,t){
                    cout << "#";
                }
            }
            else{
                if(flag){
                    rep1(j,t-1){
                        cout << ".";
                    }
                    cout << "#";
                    flag = 0;
                }
                else {
                    cout << "#";
                    rep1(j,t-1){
                        cout << ".";
                    }
                flag = 1;
                }
            }
            cout << endl;
        }
    return 0;
}

