#include <stdio.h>
#include <math.h>
#define PI4o3 ((4*M_PI/3))
#define CUBE(n) ((n)*(n)*(n))

int main(){
    double r;
    for(r=1.0;r<=10.0;r+=1.0){
        printf("%f\n",PI4o3*CUBE(r));
    }

    return 0;
}

/*
4.188790
33.510322
113.097336
268.082573
523.598776
904.778684
1436.755040
2144.660585
3053.628059
4188.790205
*/