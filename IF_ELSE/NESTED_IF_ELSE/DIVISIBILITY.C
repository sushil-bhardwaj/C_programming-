#include <stdio.h>
int main(){
    int a;
    printf("enter no:");
    scanf("%d",&a);
    if(a%5==0){
        if(a%3==0){
            printf("divisible by both 5 and 3");
            
            
        }
        else{
            printf("not divisible by both 5&3");
        }
    }
    else{
        printf("the no is not divisible by both 5&3");
    }
    return 0;
}