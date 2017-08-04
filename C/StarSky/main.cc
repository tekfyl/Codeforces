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
double tick(){static clock_t oldt,newt=clock();double diff=(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}
using namespace std;

ll inf=1e18+1;  
ll N; 

ll in=0,i=0,j=0,k=0,ans=0;
ll n=0,m=0,t=0,v1=0,v2=0;
char c; string s;

int main(){
    ios_base::sync_with_stdio(false);
    int n,q,c;
    cin >> n >> q >> c;
    map<ii,int > brt;
    vector<ii > v;
    rep(i,n){
        int x,y,s;
        cin >> x >> y >> s;
        v.pb(mk(x,y));
        brt[mk(x,y)] = s;
    }
    //sort(all(v));
    rep(i,q){
        int t,x1,x2,y1,y2;
        ans = 0;
        cin >> t >> x1 >> y1 >> x2 >> y2;
        //j = lower_bound(all(v), mk(x1,y1))-v.begin(); 
        j=0;
        while(j != v.size()){
            if(v[j].fi <= x2 && v[j].se <= y2 && v[j].fi >= x1 && v[j].se >= y1){
            ans += (brt[v[j]] + t)%(c+1);
            j++;
            }
            else{ j++; }
        }
        cout << ans << endl;
    }

    /*
    for(auto g:v){
        cout << g.fi << " " << g.se << endl;
    }
    */
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

