#include <stdio.h>
int main(){
    int a, b, seki;
    printf("2つの整数値を入力して下さい.\n");
    printf("整数a: "); scanf("%d",&a);
    printf("整数b: "); scanf("%d",&b);
    seki = a * b;
    printf("2つの整数値の積は%dです.\n",seki);
    return 0;

}
/*2つの整数値を入力して下さい.
整数a: 4
整数b: 3
2つの整数値の積は12です.*/