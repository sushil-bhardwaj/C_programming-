
#include<stdio.h>
int main(){
    //we have to print the GP 3 12 48  ,,,,,
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a=3;
    for(int i=1;i<=n;i++){
        printf("%d  ",a);
        a=a*4;
    }

    return 0;
}