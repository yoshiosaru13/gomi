#include <stdio.h>

int pw3(int a);

int main(void){
    int x,y;
    scanf("%d",&x);
    printf("x = %d\n",x);
    y = pw3(x);
    printf("the thirf power of %d = %d\n",x,y);
}

int pw3(int a){
    int b;
    b = a*a*a;
    return b;
}
/*5
x = 5
the thirf power of 5 = 125