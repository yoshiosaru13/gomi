#include <stdio.h>
int main(void){
    int n,i = 0;
    scanf("%d",&n);
    printf("%dの約数は、",n);

    while(++i <= n){
        if(n % i == 0){
            printf("%d,",i);
        }
    }
}
/*9367の約数は、1,17,19,29,323,493,551,9367*/