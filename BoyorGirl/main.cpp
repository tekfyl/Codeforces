#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
        //cin >> n;
        string s; cin >> s;
        int zero;
        vector<int> freq(26, 0);
        for(auto c:s){
            freq[c-'a']++;
        }
        zero = count(freq.begin(), freq.end(), 0);
        (zero%2 == 1) ? cout << "IGNORE HIM!" : cout << "CHAT WITH HER!";
    return 0;
}

