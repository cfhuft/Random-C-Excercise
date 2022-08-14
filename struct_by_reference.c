#include <stdio.h>

struct STR{                                 //pass structure by reference
        int a;
        int *b;
};

void functi(struct STR*);

int main(){

    struct STR STR;
    struct STR *STRPT;
    STRPT=&STR;
    functi(STRPT);

    printf("%d\n", STR.a);
    printf("%d\n", *STR.b);

    STR.a=17;

    printf("%d\n", STR.a);
    printf("%d", *STR.b);


}

void functi(struct STR* strpt){

    strpt->a=10;
    strpt->b = &(strpt->a);
}