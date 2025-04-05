#include<stdio.h>

void minmax(int len,int a[],int *max,int *min){
    *min=*max=a[0];
    for(int i=1;i<len;i++){
        if(a[i]>*max)
            *max=a[i];
            if(a[i]<*min)
            *min=a[i];
    }
}
int main(){
    int a[]={1,5,9,7,4};
    int max,min;
    int len;
    len=sizeof(a)/sizeof(a[0]);
    
    minmax(a,len,&max,&min);
    printf("max is %d, min is %d",max,min);
    return 0;

}
