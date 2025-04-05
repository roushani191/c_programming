#include<stdio.h>
void Sum();
void main(){
    
    Sum();
    
}
void Sum(){
    int a,b,sum;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("%d",sum);
}