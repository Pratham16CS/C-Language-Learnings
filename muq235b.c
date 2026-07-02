//Write a program to calculate the power of a given number
#include<stdio.h>
int pw(int n,int p);
int main(){
    int n,p;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter a power: ");
    scanf("%d",&p);
    printf("%d^%d = %d",n,p,pw(n,p));
    return 0;
}
int pw(int n,int p){
    if(p != 0){
        return n*pw(n,p-1);
    }
    else{
        return 1;
    }
}