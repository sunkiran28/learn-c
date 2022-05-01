// Ex-2
// w.a.p add, sub, multiplication two numbers
#include <stdio.h>

int main(){
    int x, y, sum, sub, mul;
    printf("enter the first no.\n");
    scanf("%d",&x);
    printf("enter the second no.\n");
    scanf("%d",&y);
    // addition
    sum = x+y;

    printf("sum = %d\n",sum);

    // Subtraction
    if(x>y){
        sub = x-y;
    }else{
        sub = y-x;
    }
    printf("sub = %d\n",sub);

    //multiplication
    mul = x*y;
    printf("mul = %d\n",mul);

    return 0;
}             
