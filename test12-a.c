#include <stdio.h>
int main(){
    char a[] = "medsys";
    printf("配列の先頭アドレス=%p\n",&a);
    printf("学科=%s\n",a);
    return 0;
}
/*
配列の先頭アドレス=0x16af67394
学科=medsys
*/