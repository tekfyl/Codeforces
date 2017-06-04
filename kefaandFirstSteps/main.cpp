#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n,f=0,m=0;
        cin >> n; i=n;
        vector<int> v;
        while(i--){
            int in; cin >> in; v.push_back(in);
        }
        for(i=0; i<n-1; i++){
            v[i]>v[i+1] ? f=0 : f++;
            m = max(m, f);
        }
        cout << m+1;
    return 0;
}

