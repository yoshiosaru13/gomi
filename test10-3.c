#include <stdio.h>
int main(void){
    char s[70],*ptr1 = s;
    int i=0;
    gets(s);
    while(s[i]){
        i++;
        ptr1++;
        }
    while(--ptr1 >= s){
        putchar(*ptr1);
    }
    putchar('\n');
}
/*fdas
sadf*/