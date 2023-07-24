// C program for permuation and combination 
#include <stdio.h>

int factorial(int number);
int permutation(int n,int r);
int combination(int n,int r);

int main() {
 
   int isTrue =1,input,n,r;
   while (isTrue){
       printf("\nSELECT FROM MENU\n");
       printf("\n1. Permutation\n2. combination\n");
       scanf("%d",&input);
       printf("\nplease input n & r:\n");
       scanf("%d %d",&n,&r);
       switch(input){
           case 1:
                if(n>=r)
               {
                    printf("\nRESULT Permutation: %d\n",permutation(n,r));
               }
               else{
                   printf("n is always greater than r");
               }
                break;
           case 2: 
            if(n>=r)
               {
                    printf("\nRESULT Combination: %d", combination(n,r));
               }
               else{
                   printf("n is always greater than r");
               }
             break;
           default:
             printf("\nERROR! INPUT 1 OR 2 \n");
           
       }
       printf("\nDO YOU WANT TO CONTINUE THE TASK:YES:1 OR NO:0\n");
       scanf("%d",&isTrue);
   }
}
int factorial(int number){
    int result =1;
    if(number<=0){
        return 1;
    }
    for(int i=1;i<=number;i++){
    result = result*i;
        
    }
    return result;
}
int permutation(int n,int r){
    return factorial(n)/factorial(n-r);
}
int combination(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}