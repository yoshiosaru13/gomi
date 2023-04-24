#include <stdio.h>
int main(){
    int i,j,wa;
    int a[3][3] = {50,60,70,60,70,50,100,80,90};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            wa += a[j][i];
        }
        if(i==0){
            printf("算数の平均点は%d\n",wa/3);
            wa = 0;
        }
        else if(i==1){
            printf("国語の平均点は%d\n",wa/3);
            wa = 0;
        }
        else if(i==2){
            printf("理科の平均点は%d\n",wa/3);
            wa = 0;
        }
    }
}