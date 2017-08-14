#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define LL long long
#define pb push_back
#define vi vector<int>
#define vll vector<LL>
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
int in,i,j,k;
int n,m,t,v1,v2;

int main(){
    std::ios_base::sync_with_stdio(false);
        cin >> n;
        vector<string> v,b;
        string s;
        rep(i,n){
            cin >> s; v.pb(s);
        }
        k=0;
        rep(i,n){
            s = v[i];
            if(k == 0) {
                if(s.find("OO") != -1){
                        if(s[0] == 'O' && s[1] == 'O'){
                            s[0] = '+'; s[1] = '+';
                        }
                        else{
                            s[3] = '+'; s[4] = '+';
                        }
                 k=1; cout << "YES" << endl;
               }
           }
            b.pb(s);
        }
        if(k){
        for(auto c:b){
            cout << c << endl; 
        }
        }
        else cout << "NO";
    return 0;
}

