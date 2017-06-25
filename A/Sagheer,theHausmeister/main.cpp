#include <bits/stdc++.h>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    int i,n,m, time=0;
    cin >> n >> m;
    vector<string> v;
    for(i=0; i<n; i++){
        string in; cin >> in; v.push_back(in);
    }
    for(i=0; i<n; i++){
        string t = v[i];
        if(t.find("1") == string :: npos) {
        if(i == n-1) { cout << 0; return 0;}
        }
        else break;
    }
    int last = i; 
    int st = 0;
    for(i=n-1; i>last; i--){
        string t = v[i];
        if(t.rfind("1") == string :: npos) { time++; }
        else {
            if(st == 0){
                int d = t.rfind("1");
                if(d<=m/2){
                    time += d;
                    time *= 2;
                    time++;
                    st = 0;
                }
                else {
                    time += m+1;
                    time++;
                    st = 1;
                    
                }
            }
            else{
                int d = t.find("1");
                if(d<=m/2){
                    time += (m+1);
                    time++;
                    st = 0;
                }
                else{
                    time += 2*(m+1-d);
                    time++;
                    st = 1;
                }
            }
        }
    }
    string t = v[last];
    if(st == 0){
        time += t.rfind("1");
    }
    else{
        time += (m+1-t.find("1"));
    }
    if(time == -1){
        cout << 0;
    }
    else {
        cout << time;
    }
    
    return 0;
}
