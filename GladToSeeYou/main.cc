#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define vvl vector< vector<ll> >
#define mk make_pair
#define ii pair <int, int>
#define LL pair <ll, ll>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

int query(int x, int y){
    if(x == -1) return 0;
    cout << 1 << " " << x << " " << y << endl;
    string ret;
    cin >> ret;
    return ("TAK" == ret);
}

int get(int l, int r){
    if(l>r) return -1;
    while(l < r){
        int m = (l+r)/2;
        if(query(m,m+1)){
            r = m;
        }
        else l = m+1;
    }
    return l;
}

int main(){
    int n,k;
    cin >> n >> k;

    int x = get(1,n);
    int y = get(1,x-1);
    if(!query(y,x)) y = get(x+1,n);
    cout << 2 << " " << x << " " << y << endl;
    return 0;
}

