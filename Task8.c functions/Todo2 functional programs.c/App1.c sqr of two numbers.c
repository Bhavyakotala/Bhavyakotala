#include <stdio.h>
//called function
//suare of two numbers

void squareOfTwoNumbers(int p , int q)
{
  int result;
  result=(p*p)+(q*q)+(2*(p*q));
  printf("%d\n", result);
}
int main()
{
//calling function

 squareOfTwoNumbers(6,4);
 squareOfTwoNumbers(5,10);
 squareOfTwoNumbers(15,20);
 squareOfTwoNumbers(30,19);
 squareOfTwoNumbers(28,13);
 return 0;
}