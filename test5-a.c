#include <stdio.h>
int main(void){
    char c;
    scanf("%c",&c);
    switch(c){
        case 'a': printf("a");
        case 'b': printf("b");
                  break;
        case 'y': printf("y");
        case 'z': printf("z");
                  break;
        default:  printf("%c",c);
    }

    return 0;
}