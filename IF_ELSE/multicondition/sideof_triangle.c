#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the 1t side of a triangle :");
    scanf("%d",&a);
    printf("enter the 2nd side of triangle:");
    scanf("%d ",&b);
    printf("enter the 3rd side of a triangle:");
    scanf("%d ",&c);
    if(a+b>c && b+c>a &&a+c>b)
    {
        printf("these are the possible side of triangle");

    }
    else{
        printf("these sides are not possible ");
    }


    
    return 0;

}