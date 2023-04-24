#include <stdio.h>
int main(){
    int i,j,wa;
    int a[3][3] = {50,60,70,60,70,50,100,80,90};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            wa += a[i][j];
        }
        if(i==0){
            printf("Aさんの合計点は%d\n",wa);
            wa = 0;
        }
        else if(i==1){
            printf("Bさんの合計点は%d\n",wa);
            wa = 0;
        }
        else if(i==2){
            printf("Cさんの合計点は%d\n",wa);
            wa = 0;
        }
        
        
    }
    return 0;
}