#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter1st:");
    scanf("%d",& a);
    printf("enter 2nd:");
    scanf("%d",& b);
    printf("enter 3rd:");
    scanf("%d",& c);
    printf("enter 4th:");
    scanf("%d",& d);
    if(a>b && a>c && a>d){
        printf("ais greatest");
    }
    if(b>a && b>c && b>d){
        printf("b is greatest");
    }
    if(c>a && c>b && c>d){
        printf("c is greatest");
    }
    if(d>a && d>b &&d>c){
        printf("d is greatest");

    }
    
    return 0;
}
