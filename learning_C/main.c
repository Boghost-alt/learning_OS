#include <stdio.h>

#define AND &&
#define NOT !
#define OR ||

int main(){
    char c=getchar();
    char pc=c;
    
    putchar(c);
    
    while((c=getchar())!=EOF){
        if(pc==' ' AND  c==' ')
        {
            
        }else putchar(c);
        pc=c; 
    }
}