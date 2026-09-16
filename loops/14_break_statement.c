//break; statement is use to terminate the loop after writing "break;"
// #include<stdio.h>    //Qn:WAP to determine a number is prime or not?
// int main(){
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(int i=2;i<=(n-1);i++)        // 2 to (n-1)th numbr tak se divide karenge agar kisi se 
//     {                                  //divide ho gya to composite hoga!
   
//         if(n%i==0){
//             printf("number is composite\n");
//             break;
//         }
//     }
//     if(n==1) printf("neither prime;nor composite");
//     else printf("prime number");
//     return 0;
// }                                
#include<stdio.h>    //Qn:WAP to determine a number is prime or not?
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=(n-1);i++)        
    {                                  
   
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(n==1) printf("neither prime;nor composite");
    else if(a==0) printf("prime number");
    else if(a==1) printf("composite number");
    return 0;
}                                