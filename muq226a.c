//wrrite a program to find the sum of two numbers using user defined function.
#include<stdio.h>
int add(int i,int j);
int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d + %d = %d",a,b,add(a,b));
    return 0;
}
int add(int i,int j){
    return i+j;
}