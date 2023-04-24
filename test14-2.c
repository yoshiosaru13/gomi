#include <stdio.h>
double ave(double a,double b);
int main(){
    double average;
    average = ave(12.3,34.5);
    printf("%f\n",average);
    return 0;
}
double ave(double a,double b){
    double rtn;
    rtn = (a + b)/2;
    return rtn;
}
