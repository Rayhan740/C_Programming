#include<stdio.h>
int main(){
   char upper;
   printf("Enter a uppercase: ");
   scanf("%c",&upper);//A=65+32=>97=a
   printf("The lower case would be:%c",upper+32);
   getch();

}
