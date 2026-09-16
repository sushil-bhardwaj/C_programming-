#include <stdio.h>   //100,50,25.....upto "n"terms;
int main (){
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    float a=100;
    for(int i=1;i<=n;i++){
        printf("%f\n",a);
        a=a/2;          //a=a*(1/2)me 1/2phle perform hota hai coz of braces to 0.5 banta hai
                        //and braces ke andar 1 and 2 dono integer hai so 0.5 se 0 value leta hai 
                        // and a=a*0 ki tarah behave karta hai 
    }
    return 0;
}