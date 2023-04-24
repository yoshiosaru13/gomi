#include <stdio.h>
int main(void){
    unsigned char a[] = {1,2,4,8,16,32,64,128};
    int i;
    for(i=0;i<8;i++){
        printf("%d\n",a[i]);
    }
    printf("%d\n",a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]);

    return 0;
}