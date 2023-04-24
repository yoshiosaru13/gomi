#include <stdio.h>
double warikan(double num,double guest,int total);

int main(void){
    int num=20,guest=3,total=40039;
    double each;
    each = warikan(num,guest,total);
    printf("%7.2f\n",each);
}
double warikan(double num,double guest,int total){
    double paynum;
    double paymoney;
    paynum = num - guest;
    paymoney = total / paynum;
    return paymoney;
}
/*num=20,guest=3,total=40039
2355.24*/