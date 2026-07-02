#include<stdio.h>
int sum(int x,int y);
int main(){
    int a,b;
    printf("Enter Number1: ");
    scanf("%d",&a);
    printf("Enter Number2: ");
    scanf("%d",&b);
    int s =sum(a,b);
    printf("%d + %d = %d",a,b,s);
    return 0;
}
int sum(int x,int y){
    return x+y;
}