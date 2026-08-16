#include <stdio.h>
int main(){
    int cp,sp;
    printf("enter cp:");
    scanf("%d",&cp);

    printf("enter sp:");
    scanf("%d",& sp);

    if(cp>sp){
        printf("loss of %d rupees",cp-sp);
    }
    if(cp<sp){
        printf("profit pf %d reuppes",sp-cp);
    }
    if(cp==sp){
        printf("no proft$ !! no loss");

    }
    return 0;
}