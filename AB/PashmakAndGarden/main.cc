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

using namespace std;

vi v,q,st;
int in=0,i=0,j=0,k=0,ans=0;
int n=0,m=0,t=0,v1=0,v2=0;
char c; string s;
int N = 2e5+7, M = 2e5+1; 
vvi g(N); 
vi vis(N,0);
vi app(N,0);
vi dep(N,0);


int main(){
    ios_base::sync_with_stdio(0);
        int x1,x2,y1,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == x2){
            t = y2-y1;
            cout << x1 + t << " " << y1 << " " << x2 + t << " " << y2;
        }
        else if(y1 == y2){
            t = x2-x1;
            cout << x1 << " " << y1+t << " " << x2 << " " << y2 + t;  
        }
        else if(abs(x2-x1) == abs(y2-y1)){
            cout << x2 << " " <<  y1 << " " << x1 << " " << y2;
        }
        else{
            cout << "-1";
        }
    return 0;
}