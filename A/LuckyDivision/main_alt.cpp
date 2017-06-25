#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n;
        cin >> n;
        unordered_multiset<int> v = {n%4, n%7, n%44, n%77, n%74, n%444, n%447, n%474, n%744, n%477, n%747, n%774 ,n%47, n%777};
        cout << ((find(v.begin(), v.end(), 0) == v.end())? "NO" : "YES"); 
    return 0;
}

