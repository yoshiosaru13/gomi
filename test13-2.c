#include <stdio.h>
struct vector{
    int x;int y;
};
int v_naiseki(struct vector n,struct vector m);

int main(){
    struct vector a,b;
    int ns;
    printf("a.x = ");
    scanf("%d",&a.x);
    printf("a.y = ");
    scanf("%d",&a.y);

    printf("b.x = ");
    scanf("%d",&b.x);
    printf("b.y = ");
    scanf("%d",&b.y);

    ns = v_naiseki(a,b);

    printf("naiseki = %d\n",ns);

    return 0;
}

int v_naiseki(struct vector n,struct vector m){
    int ns;
    ns = n.x*m.x + n.y*m.y;
    return ns;
}