#include <stdio.h>
int main(void){
    int dt;
    double dtd;
    while((scanf("%d",&dt)) != EOF){
        if(dt<32 || 126<dt){
            continue;
        }
        dtd = dt / 3.0;
        printf("input integer(32-126)=%d\n",dt);
        printf("%c\n",dt);
        printf("%o\n",dt);
        printf("%d\n",dt);
        printf("%10.7f\n",dtd);
    }
}
/*100
input integer(32-126)=100
d
144
100
33.3333333*/