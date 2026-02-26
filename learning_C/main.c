#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
    int pc,c,state;
    state=OUT;
    
    while((c=getchar())!=EOF){
        if(pc==' ' && c==' '||
            pc==' ' && c=='\t'||
            pc=='\t' && c==' '||
            pc=='\t' && c=='\t'){}
        else{
            if((state==IN) && (c==' ' || c=='\t' || c=='\n')){
                putchar('\n');
                state=OUT;
            }else if(state==OUT){
                state=IN;
                putchar(c);
            }else putchar(c);
        }
        pc=c;
    }
}