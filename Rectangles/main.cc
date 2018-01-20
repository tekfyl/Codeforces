#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vvi v(50, vi(50));
    int c=0;
    ll ans=0;
    int sum=0;
    rep(i,n){
        rep(j,m){
            cin >> v[i][j];
            if(v[i][j] == 1) c++;
        }
        ans += pow(2,c);

        //cout << ans;
        c = 0;
    }
    //cout << ans;
    /*c=0;
    rep(j,m){
        rep(i,n){
            if(v[i][j] == 1) c++;
        }
        int t = (pow(2,c-1)-1 + pow(2, n-c-1)-1);
        if(t > 0) ans += t;
        c = 0;
    }
    */
    cout << ans;
    return 0;
}

