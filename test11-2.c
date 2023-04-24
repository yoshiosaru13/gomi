#include <stdio.h>
struct vector {
    int x,y;
};
int v_naiseki(struct vector n, struct vector m);

int main(void){
    struct vector a = {1,2}, b = {3,4};
    int ns;
    printf("a=(%d,%d)\n",a.x,a.y);
    printf("b=(%d,%d)\n",b.x,b.y);
    ns = v_naiseki(a,b);
    printf("naiseki = %d\n",ns);

    return 0;
}
int v_naiseki(struct vector n, struct vector m){
    int naiseki;
    naiseki = (n.x * m.x) + (n.y * m.y);
    return naiseki;
    
}