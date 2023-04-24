#include <stdio.h>
void prin0(int n);
int main(void){
    int i = 1;
    prin0(i);
    i++;
    prin0(i);
}

void prin0(int n){
    printf("Input no. = %d\n",n);
}