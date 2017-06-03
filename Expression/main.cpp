#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
       // cin >> n;
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v(10,0);
        v[0] = a+b+c;
        v[1] = a*b+c;
        v[2] = a+b*c;
        v[3] = a*b*c;
        v[4] = a*(b+c);
        v[5] = (a+b)*c;
        cout << *max_element(v.begin(), v.end());

    return 0;
}

