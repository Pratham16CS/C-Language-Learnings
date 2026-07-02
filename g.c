#include<stdio.h>
int gcd(int a,int b);
int main(){
    int m,n,p;
    printf("Enter two numbers: ");
    scanf("%d %d",&m,&n);
    p = gcd(m,n);
    printf("The GCD is %d",p);
    return 0;
}
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else{  
        return gcd(b,a%b);
    }
}