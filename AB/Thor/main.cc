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
int N = 300003, M = 2e5+1; 
vvi g(N); 
vi vis(N,0);
vi app(N,0);
vi dep(N,0);


int main(){
    ios_base::sync_with_stdio(0);
        cin >> n >> m;
        int mark[300003] = {0};
        list<int> e[300003];
        int event = 0,limit=0;
        rep(i,m){
            cin >> t;
            switch(t){
                case 1:
                    cin >> j;
                    ans++;
                    e[j].pb(++event);   
                    break;
                case 2:
                    cin >> j;
                    while(!e[j].empty()){
                        if(mark[e[j].back()] == 0){
                            mark[e[j].back()] = 1;
                            ans--;
                        }
                        e[j].pop_back();
                    }
                    break;
                case 3:
                    cin >> t;
                   // for(auto d:Q) cout << d.fi << " " << d.se << endl;
                    while(limit < t){
                        ++limit;
                        if(mark[limit] == 0){
                            mark[limit] = 1;
                            ans--;
                        }
                    }
                    break;
            }
            cout << ans << endl;
        }
    return 0;
}

