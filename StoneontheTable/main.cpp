#include <iostream>

using namespace std;

int main(){
    int i, n, count=0; string s;
    cin >> n; cin >> s;
    for(i=0; i<n-1; i++){
        if(s[i] == s[i+1]) {count++;}
    }
    cout << count << endl;
return 0;
}
