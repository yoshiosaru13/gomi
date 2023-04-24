#include <stdio.h>
struct vector{
    int x,y;
};
struct vector v_2bai(struct vector n);
int main(void){
    struct vector a={1,2},b;
    printf("a=(%d,%d)\n",a.x,a.y);
    b = v_2bai(a);
    printf("b=(%d,%d)\n",b.x,b.y);
    
    return 0;
}
struct vector v_2bai(struct vector n){
    struct vector m = {n.x*2,n.y*2};
    return m;

}