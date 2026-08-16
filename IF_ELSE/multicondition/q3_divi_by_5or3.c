#include <stdio.h>
int main(){
    int n;
    printf("enter no:");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        printf("divisible by 5or 3");

    }
    else{
        printf("not divisible by 5 or 3");
        
    }
    return 0;

}