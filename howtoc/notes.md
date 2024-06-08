pointer - store the address of another variable
address - memory location (numbered)

why pointers,- call by reference is made possible
handle arrays efficiently
create linked list, trees , graphs
putting data on heap
char c, d *p; c and d are char and *p is pointer to char 
char* c, d , p;  c is a pointer to a char d and p are char

double* pd, e, f; pd is a pointer to a double and e and f are double

int a = 5;
the declaration above tells the compiler to reserve space in memory for an int value
and associate that memory location with the name `a` then store the value 5 at that location.

address operator `&`
the ampersand operator generates the address of its operand, memory location

indirection operator `*` this is used to dereference (get the value stored at a certain memory location)
`*` is used when declaring a pointer
char *p; this is an example of pointer declaration.
pointer `&` is used to reference `*` is used to dereference

ld -> signed long
d -> int 
zu -> size_t same as unsigned long
f -> float 4 bytes


uintptr_t is defined in "stding.h"

how to print memory address of pointer as int and not as hex
```
    float *fp, num;
    num = 23.12;
    fp = &num;

    printf("address of ptr is %lu\n",(unsigned long)(uintptr_t)fp)
```
int *p = NULL;
if (p) == if(p!=NULL) == if(p!=0)

< N O T E >

A pointer contains garbage address until it is initialized.
If you try to dereference that pointer or get its value it will assign the value of 
that address to itself the compiler cannot catch that since it is a logical error.
