/*
link to kata : https://www.codewars.com/kata/55f2b110f61eb01779000053/train/c
*/
#include <stdio.h>

int get_sum(int a , int b);

int main(void) {
	int n;
	scanf("%d\n",&n);
	int a ,b;
	int result;
	for (int i = 0; i < n; i++){
		scanf("%d %d", &a,&b);
		printf("%d %d -> ",a,b);
		result = get_sum(a,b);
		printf("%d\n",result);
	}
}

int get_sum(int a , int b) {
    // Good luck
    int count = 0;
    if (a == b){
      return a;
    }
    if (a<b) {
      for(int i = a; i <= b; i++){
        count = count + i;
      }
    }else if (a>b){
      for(int i = b; i <= a; i++){
        count = count + i;
      }
    }
  return count;
}
