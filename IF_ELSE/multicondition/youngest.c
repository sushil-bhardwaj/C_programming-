#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter the age of ram");
    scanf("%d",&a);
    printf("enter the age of shyam: ");
    scanf("%d",&b);
    printf("enter the age of mohan:");
    scanf("%d",& c);
    if(a<b &&a<c){
        printf("ram is youngest with age =%d years",a);

    }
    if(b<c && b<a){
        printf("shyam is youngest with age=%dyears",b);
    }
    if(c<a && c<b){
        printf("mohan is the youngest with age=%dyears",c);
    }

    return 0;
}