#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n,count=0;
        cin >> n;
        vector<int> f(5,0);
        while(n--){
            cin >> i; f[i]++;
        }
        
        count += f[4];
        count += f[3]; f[1] -= f[3];
        
        count += f[2]/2 + f[2]%2;
        
        f[1] -= 2*(f[2]%2);
        if(f[1] > 0){
            count += f[1]/4 + (f[1]%4>0);
        }
        cout << count;
    return 0;
}

