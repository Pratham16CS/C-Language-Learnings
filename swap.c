#include<stdio.h>
void swap(int *m,int *n);
int main(){
    int a,b;
    printf("Enter numbers: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a = %d, b = %d",a,b);
    return 0;
}

void swap(int *m,int *n){
    int t;
    t = *m;
    *m = *n;
    *n = t;
}