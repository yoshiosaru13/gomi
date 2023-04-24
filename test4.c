#include <stdio.h>
int main(void){
    char a[8]={'1','2','4','8','16','32','64','128'};
    for(int x=0;x<8;x++){
        printf("%c ",a[x]);
    }
    return 0;
}