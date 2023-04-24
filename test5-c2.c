#include <stdio.h>
int main(void){
    int i=2,wa=0;
    while(i<=100){
        wa += i;
        i+=2;
    }
    printf("Wa=%d\n",wa);
    return 0;
}