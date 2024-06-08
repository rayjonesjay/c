#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

_Bool lower(char c);
_Bool upper(char c);

int main(void){
   //input -> abcdefghijklmnopqrstuvwxyz
   char string[26+1] = "abcdefghijklmnopqrstuvwxyz";

   size_t string_length = strlen(string);
   printf("%zu\n", string_length);
   for (int i = 0; string[i] != '\0'; i++){

      if (lower(string[i])){

        printf("%c -> lowercase\n",string[i]);

      }else{

        printf("%c -> UPPER\n",string[i]);

      }

   }
   string[strlen(string)-1] = '\0';
   return 0;
}

//return true if c is lowercase
_Bool lower(char c){
   return (c >= 'a' && c <= 'z');
}

//return true if c is UPPERCASE
_Bool upper(char c){
    return (c >= 'A' && c <= 'Z');
}