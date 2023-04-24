/*Advanced Computer Programming I　21T0815M TakaseHaruto 2022/7/22*/

#include <stdio.h>
#include <stdlib.h>
int main(){

    printf("21T0815M Takase Haruto\n");

    FILE *file1,*file2;
    
    int t,i,j;
    char s[40],ts[15],as[40],bs[40];
    double time[51],time_a[51],time_b[51],time_c[51],time_d[51];

    file1 = fopen("inputdata.txt","r");
    if((file1 = fopen("inputdata.txt","r")) == NULL){
        printf("can't open file inputdata.txt\n");
        exit(1);
    }
    file2 = fopen("outputdata.csv","w");
    if((file2 = fopen("outputdata.csv","w")) == NULL){
        printf("can't open file outputdata.csv\n");
        exit(1);
    }

    fgets(s,39,file1);

    for(t=0;t<51;t++){
        fgets(s,39,file1);
        printf("%s\n",s); /*s = 0.1     0.309016994     0.951056516*/

        i=0;
        for(j=0;s[i]!='\t';j++,i++){
            ts[j] = s[i];
        }
        ts[j] = '\0';
        
        time[t] = atof(ts); /*文字列 tsからdouble time*/
        printf("time = %f\n",time[t]); /*time[t] = 0.100000*/


        i=0,j=0;
        while(s[i]!='\t'){
            i++;
        }
        i+=1; 
        for(j=0;s[i]!='\t';j++,i++){
            as[j] = s[i];
        }
        as[j] = '\0';
        time_a[t] = atof(as);
        printf("time_a = %f\n",time_a[t]); /*0.309017*/


        i=0,j=0;
        while(s[i]!='\t'){
            i++;
        }
        i+=1;
        while(s[i]!='\t'){
            i++;
        }
        i+=1;
        for(j=0;s[i]!='\0';i++,j++){
            bs[j] = s[i];
        }
        bs[j] = '\0';
        time_b[t] = atof(bs);
        printf("time_b = %f\n",time_b[t]); /*0.951057*/

        printf("\n");

        time_c[t] = time_a[t] + time_b[t];
        time_d[t] = (time_a[t]*time_a[t]) + (time_b[t]*time_b[t]);
        printf("time_c = %f\n",time_c[t]);
        printf("time_d = %f\n",time_d[t]);
        printf("\n");

        fprintf(file2,"%f,%f,%f\n",time[t],time_c[t],time_d[t]);
    }
    fclose(file1);
    fclose(file2);

    printf("21T0815M Takase Haruto\n");
    
    return 0;
}
