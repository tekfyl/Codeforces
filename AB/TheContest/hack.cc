#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int k[x];
    int sum=0;
    for(int i=0;i<x;i++){
        cin>>k[i];
        sum=sum+k[i];
    }
    int y,z,l;
    cin>>y;
    if(y==0){
        cout<<-1;
        exit(0);
    }
    vector<pair<int,int> >vec;
    for(int c=0;c<y;c++){
        cin>>z>>l;
        vec.push_back(make_pair(z,l));
    }
    sort(vec.begin(),vec.end());
    if(sum>vec[y-1].second){
        cout<<-1;
    }
    else{
        for(int v=0;v<y;v++){
            if(sum<=vec[v].second && sum>=vec[v].first){
                cout<<sum;
                exit(0);
            }
        }
    }
    for(int o=0;o<y;o++){
        if(sum<vec[o].first){
            cout<<vec[o].first;
            exit(0);
        }
    }
}
