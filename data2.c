#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[100];
    scanf("%s",a);
    int N;
    N = atoi(a);
    
    int oturi = 1000 - N;
    int maisu = 0;

    while(oturi >= 500){
        oturi -= 500;
        maisu++;
    }
    while(oturi >= 100){
        oturi -= 100;
        maisu++;
    }
    while(oturi >= 50){
        oturi -= 50;
        maisu++;
    }
    while(oturi >= 10){
        oturi -= 10;
        maisu++;
    }
    while(oturi >= 5){
        oturi -= 5;
        maisu++;
    }
    while(oturi >= 1){
        oturi -= 1;
        maisu++;
    }

    printf("枚数 = %d枚\n",maisu);
}