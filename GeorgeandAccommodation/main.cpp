#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n,count=0;
        cin >> n;
        while(n--){
            int p,q; cin >> p >> q;
            q-p>1 ? count++: 1;
        }
        cout << count;
    return 0;
}

