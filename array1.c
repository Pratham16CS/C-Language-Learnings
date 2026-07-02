#include<stdio.h>
int main(){
    int num[5]={1,2,3,4,5};
    int *p = &num[0];
    int *q = num;
    int *r = num+1;
    int *s = num+2;
    int *t = num+3;
    printf("%d \n",*p);
    printf("%d \n",*q);
    printf("%d \n",*r);
    printf("%d \n",*s);
    printf("%d \n",*t);
    return 0;
}