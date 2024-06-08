#include <stdio.h>

int main(void) {
    int *p;
    if (p!=NULL){
        printf("am null\n");
    }else{
        printf("not null\n");
    }

    p = NULL;
    if (p!=NULL){
        printf("am null\n");
    }else{
        printf("not null\n");
    }

}//in c the definition of true is a value that is not equal to 0