#include <stdio.h>

#define N_LENGTH 100

int main(){
    int l_words[N_LENGTH];
    
    for(int i=0; i<N_LENGTH; i++) l_words[i]=0;
    
    int max_len=0;
    int len=0;
    char c;
    while((c=getchar())!=EOF){
        if((c!=' ' && c!='\n' && c!='\t') && len<N_LENGTH-1) len++;
        else if(c==' ' || c=='\t' || c=='\n'){
            if(len>max_len) max_len=len;
            l_words[len]++;
            len=0;
        }
    }
    if(len > 0){
        if(len > max_len) max_len = len;
        if(len < N_LENGTH)
            l_words[len]++;
    }
    
    printf("\n");
    
    int max_n_words=0;
    for(int i=0; i<N_LENGTH;i++){
        if(l_words[i]>max_n_words) max_n_words=l_words[i];
    }
    for(int i=0; i<=max_n_words; i++){
        for(int j=0; j<=max_len; j++){
            if(j==0) printf("%-3d",max_n_words-i);
            else if(i==max_n_words) printf("%-3d",j);
            else if(l_words[j]<max_n_words-i) printf("   ");
            else printf("X  ");
        }
        printf("\n");
    }
}