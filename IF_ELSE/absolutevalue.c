#include <stdio.h>
int main(){
    int n;
    printf("enterthe number:");
    scanf("%d",&n);
    
    if(n<0){
        n=n*(-1);
        printf("the absolute value=%d",n);

    }
    else{
        printf("the absolue value=%d",n);
    }
    
    return 0;
}