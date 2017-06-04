#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        long long int i,n,sum=0;
        cin >> n;
        for(i=1; i<n+1; i++){
            sum += pow(-1,i)*i;
        }
        cout << sum;
    return 0;
}

