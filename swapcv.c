//Call by value
#include<stdio.h>
void swap(int a,int b);
int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("a = %d b = %d\n",a,b);
    swap(a,b);
    printf("After swaping:\n");
    printf("a = %d b = %d",a,b);
    return 0;
}
void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swaping:\n");
    printf("a = %d b = %d\n",a,b); 
}