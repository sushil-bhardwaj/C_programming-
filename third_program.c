#include <stdio.h>
int main(){  // program to take two input and print the sum of them
    int a,b;

    printf("enter the first number:");
    scanf("%d",&a);

    printf("enter the second number:");
    scanf("%d",&b);

    int p=a+b;
    printf("the value of sum=%d",p);

    return 0;
}