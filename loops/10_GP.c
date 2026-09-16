#include<stdio.h>
int main(){
    //we have to print the GP 1,2,4,8,16,...
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        printf("%d  ",a);
        a=a*2;
    }

    return 0;
}