#include<stdio.h>
int pw(int a,int b);
int count(int a);
int main(){
    int n,r,num,new = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    num = n;
    printf("%d\n",num);
    while(n!=0){
        r =n%10;
        new = new + pw(r,num);
        n = n/10;
    }
    if(new == num){
        printf("Number is an Armstrong Number");
    }
    else{
        printf("Number is not an Armstrong NUmber");
    }
    return 0;
}
int count(int n){
    int c = 0;
    while(n!=0){
        n =n/10;
        c++;
    }
    return c;
}
int pw(int r,int n){
    int m = 1;
    for(int i=0;i<count(n);i++){
        m = m*r;
    }
    return m;
}