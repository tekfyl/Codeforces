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
    string oleg, igor;
    cin >> oleg >> igor;
    sort(all(oleg));
    sort(all(igor));
    reverse(all(igor));
    int n = igor.size();
    vector<char> ans(n);
    int ts=0, tend = n-1, ks=0, kend = n-1, top=0, back = igor.size()-1;
    rep(i, oleg.size()){
        if(i%2 == 0){
            if(oleg[ts] < igor[ks]){
                ans[top++] = oleg[ts++];
            }
            else if(oleg[ts] == igor[ks]){
                ans[back--] = oleg[tend--];
            }
            else{
                ans[back--] = oleg[tend--];
            }
        }
        else{
            if(igor[ks] > oleg[ts]){
                ans[top++] = igor[ks++];
            }
            else if(igor[ks] == oleg[ts]){
                ans[back--] = igor[kend--];
            }
            else{
                ans[back--] = igor[kend--];
            }
        }
    }
    for(char c:ans) cout << c;
    return 0;
}

