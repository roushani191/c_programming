#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="hello world";
    //char *s2=s1; // shallow copy
    //change in s1
    //s1[0]='m';
   // printf("%s",s2);
    //deep copy
    char s2[]="hello india";
    s1[0]='m';
    printf("%s\n",s1);
    printf("%s",s2);
    return 0;
}