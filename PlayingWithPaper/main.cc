#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a,b,t=0;
    cin >> a >> b;
    while(a && b){
        if(a>b){
            t += a/b;
            a %= b;
        }
        else{
            t += b/a;
            b %= a;
        }
    }
    cout << t;
}
