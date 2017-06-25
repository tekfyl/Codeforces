#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
        cin >> n;
        vector<int> x, y, z;
        while(n--){
            int in;
            cin >> in; x.push_back(in);
            cin >> in; y.push_back(in);
            cin >> in; z.push_back(in);
        }
        cout << ((accumulate(x.begin(), x.end(), 0) == 0 && 
                  accumulate(y.begin(), y.end(), 0) == 0 &&
                  accumulate(z.begin(), z.end(), 0) == 0) ? "YES" : "NO");
    return 0;
}

