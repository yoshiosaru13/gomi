#include <stdio.h>
int main(void){
    int i,wa = 0;
    for(i=2;i<=100;i+=2){
        wa += i;
    }
    printf("Wa=%d\n",wa);
    
    return 0;
}