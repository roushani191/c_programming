#include<stdio.h>
int fact(int);
int main(){
    int n,f;
    printf("enter a number:");
    scanf("%d",&n);
    f=fact(n);
    
    printf("factorial:%d",f);
    return 0;
}
int fact(int n){
int f1;
if(n==0)
return 1;
else{
    f1= n*fact(n-1);
    return f1;
}
    

}