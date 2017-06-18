#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define LL long long
#define pb push_back
#define vi vector<int>
#define vll vector<LL>
#define mk make_pair
#define ii pair <int, int>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

vi v,q,st;
int in,i,j,k;
int n,m,t,v1,v2;

int main(){
    std::ios_base::sync_with_stdio(false);
        int x1,x2,y1,y2,x,y;
        cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
        if(abs(x1-x2)%x == 0 && abs(y1-y2)%y == 0 && abs(x1-x2)/x%2==abs(y2-y1)/y%2) cout << "YES";
        else cout << "NO";
    return 0;
}

