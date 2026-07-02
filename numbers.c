#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==4){
            continue;
        }
        else if(i==47){
            break;
        }
        printf("%d \n",i);
    }
    return 0;
}
