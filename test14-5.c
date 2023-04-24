#include <stdio.h>
int main(){
    int a[335];
    int i,c;

    for(i=0;i<335;i++){
        if((c = getchar()) == '\n'){
        a[i] = i % 10;
        if(i%3 == 0 && i != 0){
            a[i] = 3;
        }
        else if(30<=i%100 && i%100<40){
            a[i] = 3;
        }
        else if(300<=i){
            a[i] = 3;
        }
        printf("%d: %d ",i,a[i]);
        }
    }
    return 0;
}