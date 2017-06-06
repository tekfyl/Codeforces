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
        int i,flag = 0;
        //cin >> n;
        string in, s="";
        cin >> in;
        for(i=0; i<in.size()-2; ){
            if(in[i] == 'W' && in[i+1] == 'U' && in[i+2] == 'B'){
                if(flag == 0) { s += " "; flag = 1;}
                i += 3;
            }
            else{
                s += in[i]; i++; flag = 0;
            }
        }
        s.erase(0); s.erase(s.end());
        cout << s;
    return 0;
}

