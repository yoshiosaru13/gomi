#include <stdio.h>
int main(void){
    int i=2,wa=0;
    do{
        wa += i;
        i+=2;
    }
    while(i<=100);
    printf("Wa=%d\n",wa);
    return 0;
}