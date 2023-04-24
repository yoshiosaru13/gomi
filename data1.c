#include <stdio.h>

int hash(int x, int m){
    return x % m;
}

void open_addressing(int x[], int a[], int n, int m){
    for(int i=0;i<n;i++){
        int h = hash(x[i], m);

        if(a[h] == 0){
            a[h] = x[i];
        }
        
        else {
            for(int j=1;j<m;j++){
                int h_new = h + j;
                if(a[h_new] == 0){
                    a[h_new] = x[i];
                    break;
                }
            }
        }
    }
    return;
}

int main(){
    int x[7] = {5,10,19,17,24,21,8};
    int n = 7;
    int m = 8;
    int a[m];
    open_addressing(x,a,n,m);

    for(int i=0;i<m;i++){
        printf("%d\n",a[i]);
    }
}