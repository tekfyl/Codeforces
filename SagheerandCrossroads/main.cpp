#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
        vector<int> v;
        for(i=0; i<16; i++){
            int in; cin >> in; v.push_back(in);
        }
        if(v[3] == 1){
            if(v[0] == 1 || v[1] == 1 || v[2] == 1 || v[4] == 1 || v[9] == 1 || v[14] == 1){
                cout << "YES"; return 0;
            }
        }
         if(v[7] == 1){
            if(v[5] == 1 || v[6] == 1 || v[2] == 1 || v[4] == 1 || v[8] == 1 || v[13] == 1){
                cout << "YES"; return 0;
            }
        }
         if(v[11] == 1){
            if(v[8] == 1 || v[10] == 1 || v[6] == 1 || v[1] == 1 || v[9] == 1 || v[12] == 1){
                cout << "YES"; return 0;
            }
        }
         if(v[15] == 1){
            if(v[12] == 1 || v[13] == 1 || v[14] == 1 || v[0] == 1 || v[5] == 1 || v[10] == 1){
                cout << "YES"; return 0;
            }
        }
        cout << "NO";
    return 0;
}

