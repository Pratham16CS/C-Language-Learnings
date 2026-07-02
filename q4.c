#include<stdio.h>
int main(){
    int num = 5;
    int *ptr=&num;
    printf("%d\n",num);
    num =10;
    printf("%d\n",num);
    *ptr=15;
    printf("%d\n",num);
    return 0;
}