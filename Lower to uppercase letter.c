#include<stdio.h>
int main(){
   char lower;
   printf("Enter a lowercase character: ");
   scanf("%c",&lower);//a=97-32=65
   printf("Upper case would be: %c",lower-32);
   getch();

}
