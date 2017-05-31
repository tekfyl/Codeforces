#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int n,m; double a;
        cin >> n >> m >> a;
        cout << ceil(n/a) * ceil(m/a);
    return 0;
}

