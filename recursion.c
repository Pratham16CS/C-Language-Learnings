#include<stdio.h>
void phw(int count);
int main(){
    int n;
    scanf("%d",&n);
    phw(n);
    return 0;
}
void phw(int count){
    if(count == 0){
        return;
    }
    printf("Hello world \n");
    phw(count-1);
}