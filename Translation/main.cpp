#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
//        int i,n;
//        cin >> n;
          string s,r;
          cin >> s >> r;
          reverse(r.begin(), r.end());
          s == r? cout << "YES" : cout << "NO";
    return 0;
}

