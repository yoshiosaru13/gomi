#include <stdio.h>
#include <string.h>

#define MAX_PATTERN 256
#define MAX_TEXT 1024

void createNextTable(int kmpNext[],char pattern[],int len);
int kmpSearch(char text[],int text_len,char pattern[],int pattern_len);

int main(){
    char text[MAX_TEXT] = "baabaababaabaavaabaabaa";
    char pattern[MAX_PATTERN] = "aabaabaa";
    int find;

    find = kmpSearch(text, strlen(text), pattern, strlen(pattern));
    if (find != -1) {
        printf("パターンはテキストの第%d文字に存在します\n", find);
    } else {
        printf("パターンはテキスト内に存在しません...\n");
    }

    return 0;
}

void createNextTable(int kmpNext[],char pattern[],int len){
    int i,j;
    kmpNext[0] = -1;
    kmpNext[1] = 0;

    for(i=2;i<=len;i++){
        j = kmpNext[i-1];

        while(j>0 && pattern[j] != pattern[i-1]){
            j = kmpNext[j];
        }

        if(pattern[j] == pattern[i-1]){
            j++;
        }

        kmpNext[i] = j;
    }
}
int kmpSearch(char text[],int text_len,char pattern[],int pattern_len){
    int text_pos;
    int pattern_pos;
    int kmpNext[MAX_PATTERN];

    createNextTable(kmpNext,pattern,pattern_len);

    pattern_pos = 0;
    text_pos = 0;

    while(text_pos < text_len){
        if(text[text_pos] == pattern[pattern_pos]){
            if(pattern_pos == pattern_len - 1){
                return text_pos - pattern_pos;
            }

            text_pos++;
            pattern_pos++;
        }
        else{
            if(kmpNext[pattern_pos] == kmpNext[0]){
                text_pos++;
                pattern_pos = 0;
            }
            else{
                pattern_pos = kmpNext[pattern_pos];
            }
        }
    }
    return -1;
}