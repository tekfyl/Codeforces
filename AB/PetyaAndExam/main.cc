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
    cin >> s;
    map<char,int> look;
    for(char c:s){
        look[c] = 1;
    }
    string r;
    cin >> r;
    cin >> n;
    rep(i,n){
start:
        in = 0; t=-1;
        getline(cin, s);
        //cout << s << endl;
        if(s.empty()) goto start;
        for(int j=0; j<r.size(); j++){
            if(r[j] != '?' && r[j] != '*'){
                if(r[j] != s[j] || j >= s.size()){
                    cout << "NO" << endl; in = 8; break; 
                }
            }
            else if(r[j] == '?'){
                if(look[s[j]] == 0) { cout << "NO" << endl; in = 8; break; }
                else s[j] = r[j];
            }
            else if(r[j] == '*'){
                    t = j;
            }
        }
        if(t != -1){
            
        }
        if(in != 8) cout << "YES" << endl;
    }
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

