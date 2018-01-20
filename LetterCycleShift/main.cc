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
    string s;
    cin >> s;
    int i=0, n = s.size();
    //if(n == 1){ s[0]+=25; cout << s; return 0; }
    if(s[i] != 'a'){
        while(s[i] != 'a' && i < n) s[i]--, i++;
    }
    else{
        while(s[i] == 'a' && i<n) i++;
        if(i == n) s[i-1]+=25;
        while(s[i] != 'a' && i < n) s[i]--, i++;
    }
    cout << s;
    return 0;
}

