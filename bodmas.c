// 2*3/4+4/4-5/8
//how computer read the {BO D/M A/S} DIVISION AND multiplication ka same presedence hai
//  and addition and subraction ka same presedence hai SO, computer left to right padhta hai
#include <stdio.h>
int main(){

 

int a= 2*3/4+4/4-5/8 ;

printf("the value of a =%d",a); // int a hai to yaha pe koi bhivalue aise nhi hoga ki divide karmeke baad decimal value lega 
                                // wo int me5/8=0; and 6/4= 1 hi hoga na ki 1.5
return 0;
}
