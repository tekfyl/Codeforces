#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,k,l,m,n,d;
        cin >> k >> l >> m >> n >> d;
        vector<int> f(d+1,0);
        for(i=1; i<d+1; i++){
            i%k == 0 ? f[i]++ : 1;    
            i%l == 0 ? f[i]++ : 1;
            i%m == 0 ? f[i]++ : 1;
            i%n == 0 ? f[i]++ : 1;
        }
        i = count(f.begin(), f.end(), 0)-1;
        cout << d-i;
    return 0;
}

