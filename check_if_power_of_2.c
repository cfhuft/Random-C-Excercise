#include <stdio.h>

int main(){
   int  n = 16;
    if ((n&(n-1))==0){                                  //is the number a power of two?   16 = 1000 & 15 = 0111
        putc('Y', stdout);
    }else{putc('N', stdout);}

return 0;
}