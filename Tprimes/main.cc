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
ll in=0,i=0,j=0,k=0,ans=0;
int n=0,m=0,t=0,v1=0,v2=0;
char c; string s;




int main(){
    ios_base::sync_with_stdio(false);
    vll v(1e6+7, 1); 
    for(i=2; i*i<1e6+1; i++){
        if(v[i] == 1){
            for(j=2*i; j<1e6+1; j+=i){
                v[j] = 0;
            }
        }
    }
    map<ll,int> hash;
    for(i=2;i<1e6+2; i++){
        if(v[i]) hash[i*i] = 1;
    }
    cin >> n;
    rep(i,n){
        ll in;
        cin >> in;
        hash[in] ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

