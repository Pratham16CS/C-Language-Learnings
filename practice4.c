#include<stdio.h>
#include<math.h>
int main(){
    int a = 4;
    int b = 7;
    a += b;
    printf("%d \n",a);
    int c = 14;
    c -=4;
    printf("%d \n",c);
    printf("%d",(a*b)+(b*c)+(a*c));
    
    return 0;
}