#include<stdio.h>
int main(){
    int n,i;
    printf("Enter total number of elements: ");
    scanf("%d",&n);
    int a[n];
    int sum = 0;
    printf("Enter elements(numbaers):\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            sum = sum + a[i];
        }
    }
    printf("Sum of even numbers in your list: %d",sum);
    return 0;
}