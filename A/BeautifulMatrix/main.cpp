#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,j,n;
        for(i=1; i<6; i++){
            for(j=1; j<6; j++){
                cin >> n; 
                if(n == 1) goto ans;
            }
        }
        ans : 
            cout << abs(3-i) + abs(3-j);
    return 0;
}

