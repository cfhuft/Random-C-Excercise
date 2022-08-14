#include <stdio.h>

void foo(void*);
void (*foo_ptr)(void*);


int main(){

    int b=3;
    void *a;
    a = &b;

    foo_ptr = &foo;
    (*foo_ptr)(a);                                    //function call

    printf("%d\n", *(int*)a);
    printf("%d", b);

}

void foo(void* a){

    *(int*)a = 10;
}