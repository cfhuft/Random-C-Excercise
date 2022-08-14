#include <stdio.h>

//Tutorial for pointer to function, pointer to struct, void pointer, pointer to integer.

void (*foo_ptr)(void*);                                         //function pointer to a void function which takes a void pointer
void foo (void*);                                               //function

typedef struct {
    int number;
}one;

int main(){

    int* ptr;                                                    //integer pointer a
    foo_ptr = &foo;                                              //function pointer gets assigned to an address of a function
    one structure;                                               //create a stuct one named structure
    one *pointer_to_structure;                                   //create a pointer to struct one
    pointer_to_structure = &structure;                           //assing a pointer to struct one to the structure
//---------------------------------------------
    structure.number=1;                                          //a way to acess a struct member
    ptr=&structure.number;                                       //assign an integer pointer to it                     
    printf("%d\n", *(int*)ptr);                                  //print
    *ptr=2;                                                      //change the struct member thru a pointer
    printf("%d\n", *(int*)ptr);                                  //print
//--------------------------------------------
    ptr=&pointer_to_structure->number;                           //assign the integer pointer to a struct member through a struct pointer
    pointer_to_structure->number = 3;                            //change the struct member through a struct pointer
    printf("%d\n", *(int*)ptr);                                  //print the content of an integer pointer
//--------------------------------------------
    ptr=&(*pointer_to_structure).number;                         //different way of writing
    pointer_to_structure->number = 4;
    printf("%d\n", *(int*)ptr);
//--------------------------------------------
    (*foo_ptr)(ptr);                                             //call a function through a function pointer
    printf("%d", *(int*)ptr);                                    //print the changed value on the address
}

void foo(void*a){

    int b=5;
    *(int*)a=b;
}