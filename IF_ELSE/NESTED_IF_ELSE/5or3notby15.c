#include <stdio.h>
int main (){
    int a;
    printf("enter no:");
    scanf("%d",& a);
    if(a%5==0 || a%3==0){
        if(a%15!=0){
            printf("the number is divisible by 5or3 not by 15");
        }
        else{
            printf("number is divisible by 15");
        }


    }
    else{
        printf("numbeer is not diisible by 5or 3");
    }
       
   
    return 0;
}