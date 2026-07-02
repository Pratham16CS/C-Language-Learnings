#include<stdio.h>
int power(int x,int n);
int main(){
    int x,n;
    printf("Enter number and power:\n");
    printf("Number: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d",&n);
    printf("%d^%d = %d",x,n,power(x,n));
    return 0;
}
int power(int x,int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return x;
    }
    else{
        return x*power(x,n-1);
    }
}