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
    cin >> n;
    vvi g(2*n+1, vi(2*n+1, -1));
    for(i=0; i<n+1; i++){
        for(j=0; j<n; j++){
            g[i][j] = i+j-n; 
        }
        g[i][n] = i;
        for(j=n+1; j<2*n+1; j++){
            g[i][j] = g[i][2*n-j];
        }
    }
    for(i=n+1; i<2*n+1; i++){
        g[i] = g[2*n-i];
    }
    for(auto d:g){
        for(auto c:d){
            if(c < 0) cout << " ";
            else cout << c;
            cout << " ";
        }
        cout << endl;
    }
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

