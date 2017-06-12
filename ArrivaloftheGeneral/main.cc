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
        int i,n,d2,mi; int max = INT_MIN, min = INT_MAX;
        cin >> n;
        vi v;
        REP(i,n){
            int in; cin >> in; v.PB(in);
            in > max ? max = in : 1;
            if(in <= min) {  min = in; mi = i+1; d2 = n-(i+1);}
        }
        int d1 = distance(v.begin(), find(all(v), max));
        //cout << d1 << d2 << endl;
        if(d1 >= mi) cout << d1+d2-1;
        else cout << d1+d2;
        return 0;
}

