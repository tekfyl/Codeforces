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
int N; 
vi v,q,st;
int in=0,i=0,j=0,k=0,ans=0;
int n=0,m=0,t=0,v1=0,v2=0;
char c; string s;




int main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> s;
    s += 'W';
    for(auto c:s){
        if(c == 'B') m++;
        else if(m) v.pb(m), m=0;
    }
    cout << v.size() << endl;
    for(auto c:v) cout << c << " ";
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

