#include <stdio.h>
void prin1(void);
int main(void){
    prin1();prin1();prin1();
    prin1();prin1();prin1();
}
void prin1(void){
    static int n = 1;
    printf("in function prin1():%d\n",n);
    n++;
} 
/*in function prin1():1
in function prin1():2
in function prin1():3
in function prin1():4
in function prin1():5
in function prin1():6