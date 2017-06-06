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
        LL i=1, n=1, x, y, l, r;
        cin >> x >> y >> l >> r;
        vll xx, yy, rr, dd;
        while(n <= pow(10,18)/x){
            xx.PB(n);
            //cout << n << endl;
            n *= x; 
        }
        n=1;
        while(n <= pow(10,18)/y){
            yy.PB(n);
            //cout << n << endl;
            n *= y;
        }
        //rr.PB(l);
        for(auto c:xx){
            for(auto v:yy){
                if(c+v >= l && c+v <=r){ rr.PB(c+v);
                //if(c+v > r) goto diff;
                //cout << c+v << endl; 
                }
            }
        }
        sort(all(rr));
        dd.PB(rr.front()-l);
        for(i=1; i<rr.size(); i++){
            dd.PB(rr[i]-rr[i-1]-1);
        }
        //if(r != pow(10,18))  dd.PB(r-rr.back());
        sort(all(dd));
        cout << dd.back();
    return 0;
}

