#include <stdio.h>
#define MAX_PATTERN 256
#define MAX_TEXT 1024

void compd(char p[], int d[], int m);
void bm1(char p[], char t[], int m, int n);

int main(){
    char t[MAX_TEXT] = "ababcadabcabac";
    char p[MAX_PATTERN] = "abcab";
    int m = 5;
    int n = 14;
    bm1(p,t,m,n);

    return 0;

}
void compd(char p[], int d[], int m)
{
    int i;

    for (i = 0; i <= 255; i++)
    {
        d[i] = m;
    }
    
    for (i = 1; i < m; i++)
    {
        d[p[i]] = m - i - 1;
    }

}
void bm1(char p[], char t[], int m, int n){
    int i,j,d[256];
    i=j=m-1;
    compd(p,d,m);
    while(i>=1 && j<=n){
        if(p[i] == t[j]){
            i--;
            j--;
        }
        else{
            if(i == (m-1)){
                j = j + d[t[j]];
            }
            else{
                j = j + d[t[j]]+ (m - i);
            }
            i = m-1;
        }
    }
    if(i == 0){
        printf("Found at %d\n",j+1);
    }
    else{
        printf("Not Found\n");
    }
    printf("%d,%d\n",p[4],t[11]);
}