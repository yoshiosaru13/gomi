#include <stdio.h>
int main(void){
    int n,i;
    scanf("%d",&n);

    for(i = 0;i<=n;i++){
        if(i == n){
            printf("%d\n",i);
        }
        else if(n%i == 0){
            printf("%d,",i);
        }
    }
    return 0;
}
/*100:1,2,4,5,10,20,25,50,100*/