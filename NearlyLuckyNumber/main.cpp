#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n,four=0,seven=0;
        string s;
        cin >> s;
        four = count(s.begin(), s.end(), '4');
        seven = count(s.begin(), s.end(), '7');
        i = seven+four;
        cout << ((i == 7 || i == 4) ? "YES" : "NO");
    return 0;
}

