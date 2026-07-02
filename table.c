#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    printf("Table of %d is :- \n",n);
    int m;
    for(int i=1;i<=20;i++){
        m = n*i; 
        printf("%d * %d = %d \n",n,i,m);
    }
    return 0;
}