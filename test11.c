#include <stdio.h>
struct xydata {
    int x;
    int y;
};
void seki(struct xydata abc);
int main(void){
    struct xydata hoge;
    hoge.x = 10;
    hoge.y = 11;
    seki(hoge);
    return 0;
}
void seki(struct xydata abc){
    int s;
    s = abc.x * abc.y;
    printf("%d\n",s);
}