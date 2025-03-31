#include<stdio.h>
int main(){
    int a=5;
    int *x=&a;
    printf("%p",x);
    printf("\n %p",&x);
    printf("\n %d",*x);
    return 0;
}