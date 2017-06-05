#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define LL long long
#define PB push_back
#define vi vector<int>
#define vll vector<LL>
#define REP(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define REP1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n,flag=0;
 //       cin >> n;
        string s; cin >> s; n = s.size();
        for(i=0; i<n-2; i++){
            if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
               s.erase(i,3); 
               if(flag ==  0) {
               s.insert(i, " ");
               flag = 1;
               }
               else {
               }
               i--; //s.erase(s.begin()+i, s.begin()+i+3);
            }
            else flag = 0;
        }
        cout << s;
    return 0;
}

