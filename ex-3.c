// Ex-3
// w.a.p to swap two number using 3 variable
#include <stdio.h>

int main(){
  int a, b, temp;
  printf("enter first no.");
  scanf("%d",&a);
  printf("enter 2nd no.");
  scanf("%d",&b);
  temp = a;
  a=b;
  b=temp;
  printf("new value of a = %d new value of b = %d",a,b);
  return 0;
}
