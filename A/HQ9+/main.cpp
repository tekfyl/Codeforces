#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
        //cin >> n;
        string s; cin >> s;
        for(auto c:s){
            if(c == 'H' || c == 'Q' || c == '9'){
                cout << "YES"; return 0;
            }
        }
        cout << "NO";
    return 0;
}

