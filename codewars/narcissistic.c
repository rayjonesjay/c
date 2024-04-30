/*
link to kata : https://www.codewars.com/kata/5287e858c6b5a9678200083c/train/c
*/

#include <stdbool.h>
#include <math.h>
bool narcissistic(int num)
{
  //store the original value of num for later comparison
  int original_num = num;
  
  //store the value of num in a temporary variable that we will use for modifications
  int temp_num = num;
  
  int power=0;
  //find the length of the num
  while (temp_num!=0){
    temp_num = temp_num / 10;
    power++;
  }
  
  //check if num is a narcissistic number
  temp_num = num;
  int result = 0;
  int lastDigit = 0;
  while(temp_num!=0){
    //extract the last digit 
    lastDigit = temp_num % 10;
    
    result = result + pow(lastDigit, power);
    
    //remove the last digit from temp_num
    temp_num = temp_num / 10;
  }
  return result == original_num;
}
