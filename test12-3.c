#include <stdio.h>
int main(){
    int a, b, wariai;
    printf("2つの整数値を入力して下さい.\n");
    printf("整数a: "); scanf("%d",&a);
    printf("整数b: "); scanf("%d",&b);
    wariai = (a * 100) / b;
    printf("aはbの%d%%です.\n",wariai);
    return 0;
}
/*2つの整数値を入力して下さい.
整数a: 43
整数b: 92
aはbの46%です.*/