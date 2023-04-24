#include <stdio.h>
struct vector{
    int x;int y;
};
struct vector v_nibai(struct vector n);

int main(){
    struct vector a = {1,2};
    struct vector b;
    printf("a=(%d,%d)\n",a.x,a.y);
    b = v_nibai(a);
    printf("b=(%d,%d)\n",b.x,b.y);
}
struct vector v_nibai(struct vector n){
    struct vector m;
    m.x = 2 * n.x;
    m.y = 2 * n.y;
    return m;
}


