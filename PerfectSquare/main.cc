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

int main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        int s;
        cin >> s;
        int flag = 0;
        for(int i=1; i<=sqrt(s); i++){
            if(s/i == i) flag = 1;
            else ;   
        }
        if(flag == 0) ans = max(ans, s);
    }
    cout << ans;
    return 0;
}

