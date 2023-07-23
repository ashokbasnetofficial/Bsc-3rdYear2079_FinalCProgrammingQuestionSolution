// C lower to upper case conversion
#include <stdio.h>
#define maxStringLen 50
int main() {
char str[maxStringLen];
int i=0;
printf("Enter the lowercase string:\n");
gets(str);
while(str[i]!='\0'){
    if(str[i]>='a'&&str[i]<='z'){
        str[i]=str[i]-32;
    }
    i++;
    
}
printf("Result uppercase string is: %s",str);
return 0;
}