#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
        string s; cin >> s;
        n = s.size();
        int one, two, three;
        one = count(s.begin(), s.end(), '1');
        two = count(s.begin(), s.end(), '2');
        three = count(s.begin(), s.end(), '3');

        for(i=0; i<one; i++){
            s.append("1+");
        }
        for(i=0; i<two; i++){
            s.append("2+");
        }
        for(i=0; i<three; i++){
            s.append("3+");
        }

        for(i=n; i<2*n; i++){
            cout << s[i];
        }
    return 0;
}

