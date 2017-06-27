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
const int N = 2e5+7; vector< vi > g(N); vi vis(N,0);

void FastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    FastIO();
        LL x,y,l,r;
        cin >> x >> y >> l >> r;
        vll xp, yp;
        LL num1=1, num2=1;
        xp.pb(num1); yp.pb(num2);
        while(num1<1e18/x) num1*=x, xp.pb(num1);
        while(num2<1e18/y) num2*=y, yp.pb(num2);
        vll sum; sum.pb(l-1); sum.pb(r+1);
        for(auto c:xp)
            for(auto d:yp)
                sum.pb(c+d);
        sort(all(sum));
        LL bst=0;
        rep(i,sum.size()-1){
            if(sum[i] > l-1 && sum[i] < r+1){
                bst = max(bst, sum[i+1]-sum[i]-1);
            }
        }
        cout << bst;
    return 0;
}

