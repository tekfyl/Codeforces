#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        double a,n,m;
        cin >> n >> m >> a;
        cout << (long long)ceil(n/a) * (long long)ceil(m/a);
    return 0;
}

