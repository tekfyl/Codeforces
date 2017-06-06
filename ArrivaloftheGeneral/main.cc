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
        cin >> n;
        vi v;
        REP(i,n){
            int in; cin >> in; v.PB(in);
        }
        if(max_element(all(v))>min_element(all(v)))
        cout << -2+distance(v.begin(), max_element(all(v))) + distance(min_element(v.rbegin(), v.rend()), v.end());
        else       
        cout << -1+distance(v.begin(), max_element(all(v))) + distance(min_element(v.rbegin(), v.rend()), v.end());
    return 0;
}

