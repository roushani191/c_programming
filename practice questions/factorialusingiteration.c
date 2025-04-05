#include<stdio.h>
int main(){
    int n,f;
    printf("enter a number:");
    scanf("%d",&n);
    f=1;
    for(int i=1;i<=n;i++)
    f=f*i;
    printf("factorial is:%d",f);
    return 0;
}