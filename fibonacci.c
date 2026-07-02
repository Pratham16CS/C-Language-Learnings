#include<stdio.h>
int main(){
    int n1,n2,n3,m;
    n1 = 0;
    n2 = 1;
    printf("Enter number of digits in fibonacci series: ");
    scanf("%d",&m);
    printf("%d,%d,",n1,n2);
    for(int i=2;i<m;i++){
        n3 = n1 + n2;
        if(i<m-1){
            printf("%d,",n3);
        }
        else{
            printf("%d.",n3);
        }
        n1 = n2;
        n2 = n3;
    }
    return 0;    
}