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
int in=0,i=0,j=0,k=0,ans=0;
int n=0,m=0,t=0,v1=0,v2=0;
char c; string s;








int main(){
    std::ios_base::sync_with_stdio(false);
        cin >> s;
        rep(i,s.size()-1){
            if(s[i] == s[i+1]){ 
                t++; 
                if(t>5){
                cout << "YES"; return 0;        
            }
            }
            else t=0;
        }
        cout << "NO";
    return 0;
}

