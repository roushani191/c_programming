#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
   // scanf("%s",str); //don't use '&' here and only the first word will be considered
   //gets(str);
   // printf("your input is: %s",str);
   // puts(str);

   //third way
    scanf("%[^\n]s",str);
    printf("your input: %s",str);
    return 0;
}