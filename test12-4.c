#include <stdio.h>
int main(){
    double cm;
    printf("長さをcmで入力して下さい: ");
    scanf("%lf",&cm);
    printf("それは%fインチです.\n",cm / 2.54);
    return 0;
}
/*長さをcmで入力して下さい: 54
それは21.259843インチです.*/