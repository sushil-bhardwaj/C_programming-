#include <stdio.h>
int main(){
    int l,b;
    printf("enter the lenght:");
    scanf("%d",&l);

    printf("enter the breadth:");
    scanf("%d",&b);   //qn is :-bataoo kab area perimeter se jayada hai. 

    int a=l*b;
    int p=2*(l+b);

    if (a>p){
        printf("area is greater than perimeer");
    }
    else{
        printf("area is not greater than perimeter");
    }
    return  0;
}