#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define LL long long
#define pb push_back
#define vi vector<int>
#define vll vector<LL>
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
        cin >> n;
        int m,count=0; cin >> m;
        for(i=0; i<n-1; i++){
            int in; cin >> in;
            if(m!=in){
                count++; m = in;
            }
        }
        cout << count+1;
    return 0;
}

