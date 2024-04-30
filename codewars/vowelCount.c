/*
link to kata : https://www.codewars.com/kata/54ff3102c1bad923760001f3/train/c
*/


#include <stdio.h>
#include <stddef.h>

size_t get_count(const char *s)
{
   int count=0;
    for (int i = 0;s[i]!='\0';i++){
       if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            count++;
        }
    }
    return count;
}

int main(void) {	

	char s[11] = "abracadabra";
	int result = get_count(s);
	printf("%d\n",result);
	return 0;
}
