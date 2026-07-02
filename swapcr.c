#include<stdio.h>
void swap(int *a,int *b);
void main(){
    int m,n;
    printf("Enter two number:\n");
    scanf("%d %d",&m,&n);
    printf("a = %d b = %d\n",m,n);
    swap(&m,&n);
    printf("After swaping:\n");
    printf("a = %d b = %d\n",m,n);
}
void swap(int *p,int*q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}