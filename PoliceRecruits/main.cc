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
int in,i,j,k;
int n,m,t,v1,v2;

int main(){
    std::ios_base::sync_with_stdio(false);
    int pos=0,neg=0;    
    cin >> n;
    rep(i,n){
        cin >> in; 
        in>0? pos+=in : pos>0? pos-- : neg--;
    }
    cout << abs(neg);
    return 0;
}

