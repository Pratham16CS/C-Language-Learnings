#include<stdio.h>
int main(){
    int a[]={2,3,5,9,10,25};
    int *p=&a[0];
    int *q=&a[2];
    printf("%d\n",*p);
    p=p+2;
    printf("%d\n",*p);
    q=q+1;
    printf("%d",*q);
    return 0;
}