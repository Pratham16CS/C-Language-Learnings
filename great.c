#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is the greatest of three. ",a);
    }
    else if(b>a && b>c){
        printf("%d is the greatest of three. ",b);
    }
    else{
        printf("%d is the greatest of three. ",c);
    }
    return 0;
}