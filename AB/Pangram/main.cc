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
        int n,t; cin >> n;
        string s;
        cin >> s;
        v.resize(26,0);
        for(auto c:s){
            if(c<='Z') {
                v[c-'A']++;
            }
            else{
                v[c-'A'-32]++;
            }
        }
        count(all(v), 0) == 0 ? cout << "YES" : cout << "NO";
    return 0;
}

