#include<stdio.h>
int main(){
    int n =12;
    int *m = &n;
    int **o = &m;
    printf("%d \n",n);
    printf("%d \n",*m);
    printf("%d \n",**o);
    printf("%p \n",&n);
    printf("%p \n",m);
    printf("%p \n",o);
    printf("%p \n",&m);
    printf("%p \n",&o);
    printf("%u \n",&n);
    printf("%u\n",m);
    printf("%u\n",o);
    printf("%u\n",&m);
    printf("%u \n",&o);
    return 0;
}