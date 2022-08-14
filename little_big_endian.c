#include <stdio.h>

int main(){
    int p=0x2; 
    if(* (char *) &p == 0x2)  {
    printf("little endiann"); 
    }
    else printf ("big endiann");
}