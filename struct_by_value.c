#include <stdio.h>

struct STR{                                 //pass structure by value (creates 2 structs, one for each function)
        int a;
        int *b;
};

void functi(struct STR);

int main(){

    struct STR STR;
    functi(STR);

    STR.a=17;
    STR.b = &(STR.a);

    printf("%d\n", STR.a);
    printf("%d", *STR.b);


}

void functi(struct STR str1){

    str1.a=10;
    str1.b = &(str1.a);

    printf("%d\n", str1.a);
    printf("%d\n", *str1.b);
}