#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define mk make_pair
#define ii pair <int, int>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
double tick(){static clock_t oldt,newt=clock();double diff=100.0*(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}

using namespace std;

ll inf=1e18+1;  
ll N; 
vll v,q,st;
ll in=0,i=0,j=0,k=0,ans=0;
ll n=0,m=0,t=0,v1=0,v2=0;
char c; string s;




int main(){
    ios_base::sync_with_stdio(false);
    cin >> s; v.resize(s.size());
    rep1(i,s.size()-1){
        v[i] = v[i-1] + (s[i] == s[i-1]);
    }
    cin >> m;
    rep(i,m){
        int l,r;
        cin >> l >> r; r--;
        cout << v[r]-v[l-1] << endl;
    }
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

