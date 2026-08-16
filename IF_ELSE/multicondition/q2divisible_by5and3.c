#include <stdio.h>
int main(){
    int n;
    printf("enter no:");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("no is divisible by both 5 and 3");

    }
    else{
        printf("no is not divisible by 5 and 3");
    }
    return 0;
}