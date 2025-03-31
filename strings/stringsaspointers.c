#include<stdio.h>
#include<string.h>
int main(){
    char str[]= " ROUSHANI KUMARI";
    char *ptr=str; //ptr now points to str[0];
   // printf("%p",&str[0]);
   // printf("\n %p",str);
    int i=0;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    return 0;
}


//in normal initialization we can modify individual characters but not the entire string. but in pointer initialization we can modify entire string but not the individual characters.