#include<stdio.h>
#include<string.h>
int main(){
    struct books{
        char name[50];
        int price;
        int pieces;
    }b,c;
    struct books a;
    strcpy("RS AGARWAL",a.name);
    a.price=200;
    a.pieces=5;
    strcpy("SEVEN STARS",b.name);
    b.price=700;
    b.pieces=8;
    strcpy("GOOD GIRL",c.name);
    c.price=500;
    c.pieces=7;
    printf("%s\n",a.name);
    printf("%d\n",a.price);
    printf("%d\n",a.pieces);
    return 0;
}