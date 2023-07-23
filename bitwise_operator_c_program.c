//take a =60, b= 13 and perform bitwise AND, bitwise OR and bitwise XOR
#include <stdio.h>
// bitwise OR => |
int bitwiseOR(int a,int b);
// bitwise XOR => ^
int bitwiseXOR(int a,int b);
// bitwise AND => &
int bitwiseAND(int a,int b);
int main() {
   int a =69,b=13;
   int status =1,input;
   while (status){
       printf("\nSELECT FROM MENU\n");
       printf("\n1. OR\n2. AND\n3. XOR\n");
       scanf("%d",&input);
       switch(input){
           case 1:
                printf("\nRESULT BITWISE OR: %d\n", bitwiseOR(a,b));
                break;
           case 2: 
                printf("\nRESULT BITWISE AND: %d", bitwiseAND(a,b));
                break;
           case 3: 
                printf("\nRESULT BITWISE XOR: %d\n", bitwiseXOR(a,b));
                break;
            default:
             printf("\nERROR! INPUT 1, 2 or 3\n");
           
       }
       printf("\nDO YOU WANT TO CONTINUE THE TASK:YES:1 OR NO:0\n");
       scanf("%d",&status);
   }
}
int bitwiseOR(int a,int b){
    return a | b;
}
int bitwiseXOR(int a,int b){
    return a^b;
}
int bitwiseAND(int a,int b){
    return a & b;
}