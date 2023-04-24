#include <stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int a[110],b[110];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<k;i++){
        scanf("%d",&b[i]);
    }

    int max=0;
    for(int i=0;i<n;i++){
        if(max<=a[i]){
            max = a[i];
       }
    }
    int judge=0;
    for(int i=0;i<k;i++){
        if(a[b[i]-1] == max){
            judge=1;
        }
    }
    if(judge){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}