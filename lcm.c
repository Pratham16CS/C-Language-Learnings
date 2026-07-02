#include<stdio.h>
int lcm(int a,int b);
int main(){
    int m,n;
    printf("Enter two numbers:\n");
    scanf("%d %d",&m,&n);
    printf("The LCM of %d & %d is %d",m,n,lcm(m,n));
    return 0;
}
int lcm(int a,int b){
    if(a%b==0){
        return a;
    }
    else if(b%a==0){
        return b;
    }
    else{
        return a*b;
    }
}
