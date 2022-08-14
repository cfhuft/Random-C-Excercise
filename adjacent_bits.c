#include <stdlib.h>
#include <stdio.h>

int inspect_bits(unsigned int number)
{
    int a;
    int b;
    for (int i=31; i>=0; i--){
        b=(number>>i&1);
        if(b==1){
            b=0;
            a++;
            if(a==2){return 1;}
        }else{
            a=0;
        }
    }
    return 0;
}

#ifndef RunTests
int main ()
{
    printf("%d", inspect_bits(3));
}
#endif