// #include<stdio.h>     //qn:WAP to print odd number from 1 to 100?
// int main()         //continue statement is use to skip the Iteration of the loop;
// {
//     for(int i=1;i<=100;i++){
//         if(i%2!=0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%2==0){
            continue;
        }
        else printf("%d ",i);
    }
    return 0;
}