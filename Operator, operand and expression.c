//operator->In c language there are few mathematical and logical sign(+,-,/,*,=)
//we use those are called operator.
//a+b=7 here a and b is operand and (+,=)is operator and 7 is constant and the whole equation is called expression.
/*
Types of operator
1. Arithmetic operator(+,-,*,/,%).
2. Assignment operator(=,+=,-=,*=,/=,%=,<<=,>>=,&=,^=,!=).
3. Relational operator().
4. Logical operator().
5. Conditional operator().
6. Unary operator().
7. Bitwise operator().
8. Special operator().
*/
#include<stdio.h>
int main(){

  float num1 , num2,sum,avg;
  printf("Enter two number: ");
  scanf("%f %f",&num1,&num2);
  sum= num1 + num2 ;
  avg=sum/2;
  printf("The sum is: %0.2f\n",sum);
  printf("The average is: %0.2f",avg);
  getch();

}









