#include <stdio.h>
int main(){
    int x,i;
    printf("整数値を入力して下さい: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
/*整数値を入力して下さい: 10
1 2 3 4 5 6 7 8 9 10 */