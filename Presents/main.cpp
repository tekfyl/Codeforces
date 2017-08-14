#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
        cin >> n;
        vector<int> v(n+1,0);
        for(i=1; i<n+1; i++){
            int in; cin >> in;
            v[in] = i;
        }
        v.erase(v.begin());
        for(auto c:v) cout << c << " ";
    return 0;
}

