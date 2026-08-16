#include <stdio.h>
int main(){
    // take a integer input a and b, a>b find the remainder when a is divisible by b 
    
    int a,b;
    printf("enter the dividend:");
    scanf("%d",&a);

    printf("enter the divisor:");
    scanf("%d",&b);

    int q= a/b;
    int r= a-b*q;

    printf("when %d is divided by %d then the remainder is %d",a,b,r);


    return 0;
}