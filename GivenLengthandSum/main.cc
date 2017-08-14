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
double tick(){static clock_t oldt,newt=clock();double diff=(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if(n == 1 && m == 0){
        cout << "0 0";
        return 0;
    }
    if(m < 1 || m>n*9){
        cout << "-1 -1";
        return 0;
    }
    string s1,s2;
    rep(i,n){
        int x = min(9,m);
        m-=x;
        s2 += char(x+'0');
    }
    s1 = s2;
    reverse(all(s1));
    if(s1[0] == '0'){
        rep(i,n){
            if(s1[i] > '0'){
                s1[0]++;
                s1[i]--;
                break;
            }
        }
    }
    cout << s1 << " " << s2;
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

