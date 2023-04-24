#include <stdio.h>
int main(){
    int x;
    printf("整数値を入力して下さい: ");
    scanf("%d",&x);
    if(x % 10 != 0){
        printf("%dは10の倍数ではありません.\n",x);
    }
    else{
        printf("%dは10の倍数です.\n",x);
    }
    return 0;
}
/*整数値を入力して下さい: 1340
1340は10の倍数です.*/