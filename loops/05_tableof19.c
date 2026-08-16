#include<stdio.h>
int main (){
    for(int i=1;i<=190;i++){     //for(int i=19;i<=190;i=i+19)
        if(i%19==0) printf("%d\n",i);  //ek line agr print karna hai if ke baad to bracket/enter 
                                        //avoid kiya jaaa sakta hai same line me space dekr likh skte hi
    }
    return 0;
}