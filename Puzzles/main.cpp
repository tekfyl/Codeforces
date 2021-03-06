#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n,m;
        cin >> n >> m;
        vector<int> p;
        for(i=0; i<m; i++){
            int in; cin >> in; p.push_back(in); 
        }
        sort(p.begin(), p.end());
        
        // Adopting a generic method instead of a specific one to just solve this problem
        vector<int> d;
        for(i=0; i<m-1; i++){
            d.push_back(p[i+1] - p[i]);
        }
        vector<int> dsum;
        for(i=0; i<=d.size()-n+1; i++){
            dsum.push_back(accumulate(d.begin()+i, d.begin()+i+n-1, 0));
        }
        cout << *min_element(dsum.begin(), dsum.end());
    return 0;
}

