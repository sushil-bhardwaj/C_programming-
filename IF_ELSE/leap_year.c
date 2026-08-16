#include <stdio.h>
int main(){
    int y;
    printf("enter the year u want to check");
    scanf ("%d",& y);
    
    if(y%400==0 ||(y%4==0&&y%100!=0)){
        printf("this is leap year");
    }
    else{
        printf("this is not a leap year");
    }
    return 0;
}