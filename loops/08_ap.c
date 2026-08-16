#include <stdio.h> //qn:display this ap_4,7,10,13,16....n terms
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);

    for(int i=4;i<=(3*n+1);i=i+3){
         printf("%d ",i);
    }
   
    return 0;
}