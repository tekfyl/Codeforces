#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,j,n,t;
        cin >> n >> t;
        string q; cin >> q;
        for(i=0; i<t; i++){
            for(j=0; j<n-1; j++){
                if(q[j] == 'B' && q[j+1] == 'G'){
                    q[j] = 'G'; q[j+1] = 'B'; j++;
                }
            }
        }
        cout << q;
    return 0;
}

