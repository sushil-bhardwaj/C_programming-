#include <stdio.h>
int main(){
    int a ,b ,c;
    printf("enter the 1st no:");
    scanf("%d",& a);
    printf("enterthe 2nd no:");
    scanf("%d",& b);
    printf("enter the 3rd no:");
    scanf("%d",& c);
    
    if(a>b && a>c){
        printf("%d is the greatest from %d and %d",a ,b, c);

    }
    if(b>c && b>a){
        printf("%d is greatest from %d and %d", b ,a,c);
    }
    if(c>a && c>b){
        printf("%d is greatest from %d and %d", c ,a,b);
    }

    return 0;
}