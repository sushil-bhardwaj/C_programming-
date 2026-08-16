#include <stdio.h>
int main(){
    float a;
    printf("enter the float input:");
    scanf("%f",& a);
    //{x}=x-[x]
    int b= a;
    float k= a-b;
    printf("the fractional part is %f",k);

    return 0;
}