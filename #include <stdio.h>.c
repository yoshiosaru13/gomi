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
            for(j=1;j<m;j++){
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