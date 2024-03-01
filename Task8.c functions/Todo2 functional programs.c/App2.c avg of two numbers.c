#include <stdio.h>
//called function
//average of two nubers
void getAvg(int a,int b)
{
  int result;
  result=(a+b)/2;
  printf("%d\n",result);
   
}
int main()
{
  //calling function
  getAvg(6,4);
  getAvg(10,20);
  getAvg(12,4);
  getAvg(13,20);
  getAvg(64,4);
  getAvg(18,20);
  getAvg(62,4);
  getAvg(60,20);
  return 0;
}