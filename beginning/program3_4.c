#include <stdio.h>

int main(void) {
    char letter = 0;
    printf("enter an uppercase letter: ");
    scanf("%c",&letter);
    if (letter >= 'A'){
        if (letter <= 'Z'){
            letter = letter - 'A' + 'a';
            printf("you entered an uppercase %c\n",letter);
        }
    }else{
        printf("try using the shift key i need a capital letter\n");
        }
    return 0;
}
