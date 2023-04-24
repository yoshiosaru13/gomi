#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("ピラミッドの段数を入力して下さい: ");
    scanf("%d",&n);
    for(i=0;i<n+1;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(k=0;k<i*2-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}
/*ピラミッドの段数を入力して下さい: 5
     
    *
   ***
  *****
 *******
*********
*/