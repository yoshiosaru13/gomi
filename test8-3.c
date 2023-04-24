#include <stdio.h>
void rev_array(int nn[]);
int main(void){
    int i;
    int str[100];
    for(i=0;str[i]!=EOF;i++){
        scanf("%d",&str[i]);
    }
    rev_array(str);
    return 0;
}
void rev_array(int nn[]){
    int i,n,c;
    for(i=0;nn[i];i++){
        c = nn[i];
        nn[i] = nn[n-i];
        nn[n-i] = c;
    }

}