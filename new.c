#include<stdio.h>
int main(){
    int a;
    printf("enter an integer: ");
    scanf("%d",&a);
    if(a>0){
        printf("integer is a positive integer");
    }
    else if(a==0){
        printf("origin");
    }
    else{
        printf("integer is a negative integer");
    }
    return 0;
}