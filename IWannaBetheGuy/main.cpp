#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
        cin >> n;
        int p, q;
        vector<int> f(n,0);
        cin >> p;
        for(i=0; i<p; i++){
            int in; cin >> in;
            f[in-1]++;
        }
        cin >> q;
        for(i=0; i<q; i++){
            int in; cin >> in;
            f[in-1]++;
        }
        find(f.begin(), f.end(), 0) == f.end()? cout << "I become the guy." : cout <<"Oh, my keyboard!";
    return 0;
}

