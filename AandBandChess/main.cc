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


void FastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    FastIO();
    v.resize(400,0);
    v['q'] = -9;
    v['Q'] = 9;
    v['.'] = 0;
    v['R'] = 5;
    v['r'] = -5;
    v['b'] = v['n'] = -3;
    v['B'] = v['N'] = 3;
    v['P'] = 1;
    v['p'] = -1;
    rep(i,64){
        cin >> c; 
        t += v[c];
    }
    cout << (t == 0 ? "Draw" : t>0 ? "White" : "Black");
    return 0;
}
