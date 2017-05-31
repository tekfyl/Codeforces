#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
        cin >> n;
        n++;
        int a,s,d,f;
        while(1){
            a=n%10; s=n/10%10; d=n/100%10; f/=1000;
            if(a == s || a == d || a == f || s == d || s == f || d == f) {  n++; }
            else { cout << n; break; }
        }
    return 0;
}
