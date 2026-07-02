#include<stdio.h>
int main(){
    float a[] = {2.3,3.1,5.2,9.4,12.3};
    float *p=a;
    float *q=&a[3];
    printf("%d\n",q-p);
    printf("%d\n",p-q);
    return 0;
}