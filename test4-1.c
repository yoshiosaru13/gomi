#include <stdio.h>
int main(void){
    int i = 0,j = 0;
    if(i&&(j=j+1)){;}
    printf("%d,%d\n",i,j);
    return 0;
}
/*i=0の時、ifは実行されないので　i=0,j=0のまま。i=1の時ifが実行されるのでi=1,j=1になる。*/