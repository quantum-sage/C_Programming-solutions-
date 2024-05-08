#include <stdio.h>

#define IN 1
#define OUT 0 

int main(){
    int c, wc, lc, cc, state;
    state = OUT;
    wc = lc = cc = 0;
    while((c = getchar()) != EOF){
        ++cc;

        if (c == '\n'){
            ++lc;
        }

        if (c == ' ' || c == '\t' || c == '\n'){
            state = OUT;    
        }
        else if (state == OUT){
            ++wc;
            state = IN;
        }
    }
    printf("%d %d %d",wc, lc, cc);
}