#include <stdio.h>
int main(){
    float phy ,chem ,maths ,eng ,hin;
    printf("enter marks in physics:");
    scanf("%f",& phy);

    printf("enter the marks in chemistry:");
    scanf("%f",& chem);

    printf("enter the marks im mathemaics:");
    scanf("%f",& maths);

    printf("enter the marks in english:");
    scanf("%f",& eng);

    printf("enter the marks in hindi:");
    scanf("%f",& hin);

    float p= (phy + chem + maths + eng +hin)/5;



    printf("congratulations your percentage %f",p);

    return 0;
}