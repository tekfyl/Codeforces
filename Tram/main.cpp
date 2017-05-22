#include <iostream>

using namespace std;

int main(){
    int n, i, max=0, intram=0;
    cin >> n;
    for(i=0; i<n; i++){
    int a, b; cin >> a >> b;
    intram = intram - a + b;
    if(max < intram) {max = intram;}
    }
    cout << max << endl;
return 0;
}
