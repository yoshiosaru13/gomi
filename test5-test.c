#include <stdio.h>
int main(){
    int wa = 0,seki = 1,i = 1;
    do{
        wa += i;
        seki *= i;
        i++;
    }
    while(i < 6);
    printf("Wa=%d Seki=%d\n",wa,seki);

    return 0;
}