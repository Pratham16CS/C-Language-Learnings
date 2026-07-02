#include<stdio.h>
int main(){
    int a[10];
    int *p,i,sum = 0;
    p = &a[0];
    printf("Enter ten numbers of your choice:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        sum = sum + *(p+i);
    }
    printf("Sum of your ten numbers: %d",sum);
    return 0;
}