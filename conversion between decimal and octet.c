//for any integer(decimal number) number the format sequence would be %d
//and for any hexadecimal number format sequence would be %x and for octal that would be %o
#include<stdio.h>
int main(){
  int decimal;
  printf("Enter a decimal number: ");
  scanf("%d",&decimal);
  printf("Octal number would be: %o\n",decimal);
  printf("Hexadecimal number would be: %x\n",decimal);

  int octal;
  printf("Enter a octal number: \n");
  scanf("%o",&octal);
  printf("Hexadecimal number would be:%x ",octal);


getch();
}
