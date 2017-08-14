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
    int t=0, f=0;
    cin >> n;
    rep(i,n){
        cin >> in;
        if(in == 25) t++;
        if(in == 50) f++,t--;
        if(in == 100){
        if(f>0) t--, f--;
        else t -= 3;
        }
        if(t<0 || f<0){ cout << "NO"; return 0; }
    }
    cout << "YES" << endl;
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

