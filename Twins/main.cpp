#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
        int i,n,sum=0,mysum=0,count=0;
        cin >> n;
        vector<int> v;
        for(i=0; i<n; i++){
            int in; cin >> in; v.push_back(in);
        }
        sort(v.begin(), v.end(), greater<int>());
        sum = accumulate(v.begin(), v.end(),0);
        i=0;
        while(mysum <= sum/2){
               mysum += v[i];
               i++; count++;
        }
        cout << count;
    return 0;
}

