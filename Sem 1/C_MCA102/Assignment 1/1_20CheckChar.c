// 20. Write a C program to input any character and check whether it is an alphabet, digit, or special character.

#include<stdio.h>

int main(){
  char ch;
  printf("Enter a character : ");
  scanf("%c", &ch);

  if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
    printf("%c is an Alphabet.", ch);
  else if ((ch >= '0') && (ch <= '9'))
    printf("%c is a Number.", ch);
  else printf("%c is a Special Character.", ch);

  return 0; 
}