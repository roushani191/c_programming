#include<stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a=5,b=9;
    swap(&a,&b);
    printf("value of a is %d\n",a);
    printf("value of b is %d",b);
return 0;
}