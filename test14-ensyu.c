#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *file1,*file2;
    if((file1 = fopen("inputdata.txt","r")) == NULL){
        printf("can't open file inputdata.txt\n");
        exit(1);
    }

    int t,i,j;
    char s[40],ts[15],as[40],bs[40];
    double time[51],time_a[51],time_b[51];
    file1 = fopen("inputdata.txt","r");
    file2 = fopen("outputdata.csv","w");
    fgets(s,39,file1);
    for(t=0;t<51;t++){
        fgets(s,39,file1);
        printf("%s\n",s);

        i=0;
        for(j=0;s[i]!='\t';j++,i++){
            ts[j] = s[i];
        }
        ts[j] = '\0';
        
        time[t] = atof(ts);
        printf("%s\n",ts);
        printf("%f\n",time[t]);

        i=0,j=0;
        while(s[i]!='\t'){
            i++;
        }
        i+=2;
        for(j=0;s[i]!='\t';j++,i++){
            as[j] = s[i];
        }
        as[j] = '\0';
        time_a[t] = atof(as);
        printf("%f\n",time_a[t]);


        i=0,j=0;
        while(s[i]!='\t'){
            i++;
        }
        i+=2;
        while(s[i]!='\t'){
            i++;
        }
        i+=2;
        for(j=0;s[i]!='\t';j++,i++){
            bs[j] = s[i];
        }
        bs[j] = '\0';
        time_b[t] = atof(bs);
        printf("%f\n",time_b[t]);
    }
}

