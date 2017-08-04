#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define vvl vector< vector<ll> >
#define mk make_pair
#define ii pair <int, int>
#define LL pair <ll, ll>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define swap(a,b) a=a^b,b=a^b,a=a^b
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
double tick(){static clock_t oldt,newt=clock();double diff=(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}
using namespace std;

ll inf=1e18+1;  
ll N; 
vll v,q,st;
ll in=0,i=0,j=0,k=0,ans=0;
ll n=0,m=0,t=0,v1=0,v2=0;
char c; string s;

int main(){
    ios_base::sync_with_stdio(false);
    ll p;
    cin >> n >> k >> p;
    vector<LL > v;
    rep(i,n){
        cin >> in; v.pb(mk(in,1));
    }
    rep(i,k){
        cin >> in; v.pb(mk(in,0));
    }
    sort(all(v));
    vll ans;
    rep(i,n+k-1){
        if(i==0){
            if(v[i].se == 1){
                ans.pb(abs(v[1].fi - v[0].fi) + abs(p-v[0].fi));
            }
        }
        if(v[i].se == 1){
            t = min(abs(v[i].fi - v[i-1].fi) + abs(p-v[i-1].fi) , abs(v[i+1].fi - v[i].fi) + abs(p-v[i+1].fi));
            ans.pb(t);
        }
    }
    if(v.back().se == 1){
        ans.pb(abs(v.back().fi - v[n+k-2].fi) + abs(p-v[n+k-2].fi));
    }
    cout << *mx(all(ans));
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

