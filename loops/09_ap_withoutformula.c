#include <stdio.h>   //qn:display this ap_4,7,10,13,16....n terms
int main (){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int a=4;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a+3;
    }
    return 0;

}