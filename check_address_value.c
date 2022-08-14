#include <stdio.h>

int main(){
    int *ptr = 0x67a9;
   // *ptr = 5;     used only on embedded
    printf("%x", ptr);
    //printf("%x", *ptr);
}