#include<stdio.h>
#include<string.h>
int main(){
    //char *str1="Roushani";
    //int x= strlen(str1);
    //printf("%d",x);
    //copy function
    char s1[9]="Roushani";
    char s2[9];
    strcpy(s2, s1);
    printf("%s",s2);
    return 0;
}