#include <stdio.h>
int main(){
int n,s=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int num;
        scanf("%d",&num);
        s+=num-1;
        if(s%2) printf("1\n");
        else printf("2\n");
    }
    return 0;    
}
