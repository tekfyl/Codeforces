#include <bits/stdc++.h> 

using namespace std; 

int main (){
    int n, m, a[100001], l[100001], r[100001], sum = 0, flag = 0;
    cin >> n; 
    for (int i = 0; i < n; i++){
        cin >> a[i]; 
        sum += a[i];
    }
    //cout << sum;
    cin >> m; 
    for (int j = 0; j < m; j++){
        cin >> l[j] >> r[j];
    }
    
    for (int j = 0; j < m; j++){
            if (r[j] >= sum){
                cout << max(l[j], sum);
                flag = -1;
                break; 
            }
            
    }
    if (flag == 0)cout << "-1" << endl;
    return 0; 
}
