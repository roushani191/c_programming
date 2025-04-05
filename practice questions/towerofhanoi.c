#include<stdio.h>
void tower(int n,char s,char h,char d){
    if (n==1)
    printf("move disk 1 from %c to %c",s,d);
    tower(n-1,s,h,d);
    printf("move disk %d from %c to %c",n,s,d);
    tower(n-1,h,d,s);
   // printf("move disk %d from %c to %c",)
}
int main(){
    int n;
    char a,b,c;
    printf("enter number of stacks:");
    scanf("%d",&n);
    tower(n,'a','b','c');
    return 0;
}
