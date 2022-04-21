#include<stdio.h>
int main()
{
/*	char upper, lower;
	printf("Enter a lower case letter: ");
	scanf("%c",&lower);
	upper=toupper(lower);//library function toupper
	printf("The upper case would be:%c ",upper);
	getch();
}
*/

 char lower, upper;
 printf("Enter a upper case letter: ");
 scanf("%c",&upper);
 lower=tolower(upper);//library function for lowercase tolower.
 printf("The lower case would be:%c ",lower);
 getch();
}
