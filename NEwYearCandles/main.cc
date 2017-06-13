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
        int i,n;
        //cin >> n;
        int a,b,h,rem,div; cin >> a >> b;
            h += a; div = a/b; rem = a%b; 
        while(div>0){
            h += a;
            a = div + rem;
            rem = a%b; div = a/b;
        }
        cout << h;
    return 0;
}

