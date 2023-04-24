#include <stdio.h>
struct xydata{
    int x;
    int y;
};
void seki(struct xydata data);

int main(){
    struct xydata hoge;
    hoge.x=10;
    hoge.y=11;
    seki(hoge);
    return 0;
}

void seki(struct xydata data){
    int s;
    s = data.x * data.y;
    printf("%d\n",s);
}

/*110*/