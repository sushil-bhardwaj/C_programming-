// #include <stdio.h>     //print ap:4,7,10,13,16..
// int main()
// {
//     int n;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     for(int i=4;i<=(3*n+1);i=i+3){
//         printf("%d\n ",i);
//     }
//     return 0;
// }
#include <stdio.h>
int main (){
    int n,i,a;
    
    printf("enter the value of n:");
    scanf("%d",&n);
    a=4;
    for(i=1;i<=n;i=i+1){
        printf("%d\n",a);
        a=a+3;
    }
    return 0;
}