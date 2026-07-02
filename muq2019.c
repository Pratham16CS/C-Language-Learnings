#include<stdio.h>
int main(){
    int a = 1;
    do{
        a++;
        ++a;
    }while(a++>25);
    printf("%d\n",a);
    return 0;
}