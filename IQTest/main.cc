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
        int n,t,even,odd,flag=0;
        cin >> n;
        rep(i,n){
            cin >> in; v.pb(in);
            in%2 == 0 ? even = i : odd = i;
            if(accumulate(all(v), 0)%2) flag++; 
        }
            flag <= 1? cout << even+1 : cout << odd+1;
    return 0;
}

