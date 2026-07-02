#include<stdio.h>
int main(){
    int x,y,i,j,count;
    printf("Enter start and end point of numbers.\n");
    printf("start: ");
    scanf("%d",&x);
    printf("end: ");
    scanf("%d",&y);
    printf("List of prime numbers from %d to %d:\n",x,y);
    for(i=x;i<=y;i++){
        count = 0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
    }
    return 0;
}