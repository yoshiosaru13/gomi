#include <stdio.h>
int main(){
    int a = 14, b = 6, i, r;
    if(a < b){
        i = a;
    }
    else{
        i = b;
    }

    do{
        r = a%i + b%i;
        if(r == 0){
            break;
        }
        i--;
    }
    while(i >= 0);

    printf("GCD = %d\n",i);
}