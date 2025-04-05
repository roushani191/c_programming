#include<stdio.h>
#include<strings.h>
int main(){
char p[20];
char s[10]="strings";
int length=strlen(s);
int i;
for(i=0;i<length;i++){
    p[i]=s[length-i-1];

}
printf("%s",p[1]);
p[length]='\0';
printf("%s",p);
return 0;
}