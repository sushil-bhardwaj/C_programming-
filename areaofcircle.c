#include <stdio.h>
int main(){
    float radius;
    printf("enter the radius:");

    scanf("%f", &radius);
    float pi=3.1415;
    float area= pi*radius*radius;

    printf("the area of the circle :%f",area);
    return 0;
}