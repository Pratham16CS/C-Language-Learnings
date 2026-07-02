#include<Stdio.h>
int main(){
    float n,i=0;
    printf("Enter a number: ");
    scanf("%f",&n);
    for(i=0;i<n;i++){
        printf("%f\n",i);
    }
    return 0;
}