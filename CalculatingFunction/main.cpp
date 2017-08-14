#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        long long int i,n;
        cin >> n;
        cout << (n%2 == 0? n/2 : -(n+1)/2);
    return 0;
}

