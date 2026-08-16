#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a, &b,&c);
    if(a>b){
        if(a>c){
            printf("%d is greatest",a);
        }
        else{            //a<c=>    b<a<c
            printf("%d  is greatest",c);
        }       

    }
    else{      //a<b aisa ho gya hai means b is >a
        if(b>c){
            printf("%d is greatest",b);
        }
        else{       //c>b upper else me aaya hi u ki b>a tha =>  a<b<c ;c is greatest
            printf("%d is greatest",c);
        }
    }


    return 0;
}