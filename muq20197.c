//Program to calculate Summation of series:- 1+2^2+3^3+....+n^n.
#include<stdio.h>
int pw(int m,int n);
int main(){
    int x;
    printf("Enter length of series: ");
    scanf("%d",&x);
    int i,sum;
    sum = 0;
    for(i=1;i<=x;i++){
        sum += pw(i,i);
    }
    printf("Summation of series: %d",sum);
    return 0;
} 
int pw(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return m*pw(m,n-1);
    }
}