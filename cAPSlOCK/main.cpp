#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n=0;
        //cin >> n;
        string s; cin >> s;
        for(i=1; i<s.size(); i++){
            if(s[i] > 'Z') n = 1;
        }
        if(n==1){
            cout << s; return 0;
        }

        for(i=0; i<s.size(); i++){
            s[i] = s[i] <= 'Z' ? s[i]+32 : s[i]-32;
        }
        cout << s;
    return 0;
}

