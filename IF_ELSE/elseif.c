#include <stdio.h>
int main (){
    int n;
    printf("enter the marks ");
    scanf("%d",&n);
    if(n>90)
        printf("excellent");
    else if(n>70)
        printf("good");
    else if(n>60)
        printf("can improve");
    else if(n>50)
        printf("AVG");
    else if(n>40)
        printf("beloowAVG");
    else
        printf("fail");
    return 0;
}