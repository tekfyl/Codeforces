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

int main(){
    std::ios_base::sync_with_stdio(false);
        int n,t,i=0;
        LL st=5,sum=5;
        cin >> n;
        if(n<6) { i=n; goto ans; }
        while(n>sum){
            st *= 2;
            sum += st;
        }
        sum -= st;
        while(n>=sum){
            sum += (st/5);
            i++;
        }
ans :
        switch(i) {
            case 1 :
                cout << "Sheldon";
                break;
            case 2 :
                cout << "Leonard";
                break;
            case 3 :
                cout << "Penny";
                break;
            case 4 :
                cout << "Rajesh";
                break;
            case 5 :
                cout << "Howard";
                break;
        }
    return 0;
}

