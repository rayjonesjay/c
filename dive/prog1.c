//An example C program with local and global variables
#include <stdio.h>

int max(int n1, int n2); /*function prototypes*/

int change(int amt);

int g_x; /*global variable: declared outside function bodies*/

int main(void){

    int result , x ;; /* local variables: declared inside function bodies*/

    printf("Enter a value: \n");
    scanf("%d", &x);

    g_x = 10; //global variables can be accessed in any function
    result = max(g_x, x);

    printf("%d is the largest of %d and %d\n", result, g_x,x);


    result = change(10);
    printf("g_x's value was %d and now is %d\n",result, g_x);

    return 0;
}


int change(int amount) {
    int val;
    val = g_x;
    printf("%d\n",g_x);
    g_x += amount;
    printf("%d\n",g_x);
    printf("%d\n",val);
    return val;
}

int max(int a , int b) {
    int val ; //this is a local variable 

    val = a; 
    if ( b > a) { //if b is greater than a then b becomes the max
        val = b; 
    }
    //if the above condition is false then return a 
    return val;
}