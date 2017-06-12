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
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

vi v;
int in;

int gcd(int a, int b){
    return (b == 0? a : gcd(b,a%b));
}

int main(){
    std::ios_base::sync_with_stdio(false);
        int n,t;
        int a,b;
        cin >> a >> b >> n;
        int i = 0;
        while(1){
            if(i%2 == 0){
                n = n - gcd(a, n);
                if(n<0) {
                    cout << 1; return 0;
                }
                i++;
            }
            else {
                n = n - gcd(b, n);
                if(n<0){
                    cout << 0; return 0;
                }
                i++;
            }
        }
    return 0;
}

