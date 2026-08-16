#include<stdio.h>
int main()
{
    int a;
    printf("enter the  no:");
    scanf("%d",&a);
    if(a>99 && a<1000){
        printf("the number is 3 digit no");
    }
    else{
        printf("this is not a 3 digit no");

    }
  
    return 0;
}
    