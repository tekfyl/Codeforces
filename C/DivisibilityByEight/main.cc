#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<LL>
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
const int N = 2e5+7; 
vvi g(N); 
vi vis(N,0);
vi app(N,0);
vi dep(N,0);


int main(){
    ios_base::sync_with_stdio(0);
        cin >> s;
        s = "00" + s;
        n = s.size();
        rep(i,n){
            for(j=i+1; j<n; j++){
                for(k=j+1; k<n; k++){
                    m = (s[i]-'0')*100 + (s[j]-'0')*10 + (s[k]-'0');
                    if(m%8 == 0){
                        cout << "YES\n" << m; return 0;
                    }
                }
            }
        }
        cout << "NO";
    return 0;
}

