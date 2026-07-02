#include<stdio.h>
void enter(int p[],int n);
void print(int p[],int n);
int main(){
    int num[10];
    printf("enter any 10 numbers: ");
    enter(num,10);
    print(num,10);
    return 0;
}

void enter(int p[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
}

void print(int p[],int n){
    for(int i=0;i<n;i++){
        printf("%d \t",p[i]*p[i]);
    }
}