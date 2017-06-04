#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,k,n,w,money=0;
        cin >> k >> n >> w;
        for(i=1; i<=w; i++){
            money += i*k;
        }
        cout << (money-n >0 ? money-n : 0);
    return 0;
}

