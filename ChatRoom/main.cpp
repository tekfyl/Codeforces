#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false); 
    int i=0,p=0;
        string s,g("hello"); cin >> s;
        while(i<s.size() && p != g.size()){
            if(s[i] == g[p]) { p++; }
            i++;
        }
        p == g.size()? cout << "YES" : cout << "NO";
    return 0;
}

