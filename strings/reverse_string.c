#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    puts("enter a string:");
    scanf("%[^\n]s",str);
   // puts("after reversing :");   // automatically \n bhi de deta hai
    //puts("the size is:");
    int size= 0;
    int k= 0;
    while(str[k]!='\0'){
        size++;
        k++;

    }
    for(int i=0, j=size-1; i<=j; i++,j--){
        char temp= str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("the reverse string is:");
    puts(str);
    return 0;
}