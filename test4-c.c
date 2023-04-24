#include <stdio.h>
int main(){
    int i = 1;
    int n = 1;
    while(++n <= 10000){
        while(++i < n){
            if(n%i == 0){
                break;
            }
        }

        if(i == n){
            printf("%dhasosu\n",n);
        }
        else{
            printf("%dhasosudehanai\n",n);
        }
        i = 1;
    }
}
/*9973*/