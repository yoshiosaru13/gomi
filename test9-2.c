#include <stdio.h>
int main(void){
    double x[3];
    int i;
    for(i=0;i<3;i++){
        printf("x[%d] no address is %p\n",i,&x[i]);
        printf("value is %f\n",x[i]);

        double *ptr = &x[i];
        *ptr = 1.23;


    }
    for(i=0;i<3;i++){
        printf("%f\n",x[i]);
    }


    return 0;
}