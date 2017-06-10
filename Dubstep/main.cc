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
    vector<char> str;
    string s; int flag=0;
    cin >> s;
    int i = 0;
    while(i<s.size()){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
           if(flag == 0) str.PB(32); i = i+3; flag = 1;
        }
        else{
            str.PB(s[i]); i++; flag = 0;
        }
    }
    if(str.front() ==  32) str.erase(str.begin());
    if(str.back() == 32)  str.erase(str.end()-1);
    for(auto c:str) cout << c;
    return 0;
}

