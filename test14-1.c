#include <stdio.h>
int main(){
    int i;
    for(i=1896;i<=2040;i++){
        if(i%4 == 0 && i%100 != 0){
            printf("%d ",i);
        }
        else if(i%400 == 0){
            printf("%d ",i);
        }
    }
    return 0;
}