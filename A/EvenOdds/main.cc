#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define LL long long
#define PB push_back
#define vi vector<int>
#define vll vector<LL>
#define REP(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define REP1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        LL i,n,k;
        cin >> n >> k;
        if(k <= (n+1)/2){
            cout << k*2-1;
        }
        else{
            cout << (k-(n+1)/2)*2;
        }
    return 0;
}

