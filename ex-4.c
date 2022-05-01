// Ex-3
// w.a.p to swap two number without using 3 variable
#include <stdio.h>

int main(){
 int a, b;
    printf("enter first no.");
    scanf("%d",&a);
    printf("enter 2nd no.");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("new value of a = %d \nnew value of b = %d",a ,b);
    return 0;
}             
