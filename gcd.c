#include<stdio.h>
int gcd(int a,int b);
int main(){
    int m,n;
    printf("Enter two numbers:\n");
    scanf("%d %d",&m,&n);
    printf("The GCD of %d & %d is %d",m,n,gcd(m,n));
    return 0;
}
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    else{
        gcd(b,a%b);
    }
}