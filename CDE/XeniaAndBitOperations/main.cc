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
ll in=0,i=0,j=0,k=0,ans=0,p,b;
ll n=0,m=0,t=0,v1=0,v2=0;
char c; string s;
vi sg(333333,0), flag(333333,0);

void update(){
    int pos = p+n-1;
    sg[pos] = b;
    pos /= 2;
    while(pos){
        if(flag[pos*2] == 1){
            sg[pos] = sg[2*pos] ^ sg[2*pos+1];
        }
        else{
            sg[pos] = sg[2*pos] | sg[2*pos+1];
        }
        pos /= 2;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    n = 1<<n;
    rep(i,n) cin >> sg[n+i], flag[n+i] = 2;
    for(i=n-1; i>0; i--){
            if(flag[i*2] == 2){
                sg[i] = sg[2*i] | sg[2*i+1];
                flag[i] = 1;
            }
            else{
                sg[i] = sg[2*i] ^ sg[2*i+1];
                flag[i] = 2;
            }
    }
    rep(i,m){
            cin >> p >> b;
            update();
            cout << sg[1] << endl;
    }
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

