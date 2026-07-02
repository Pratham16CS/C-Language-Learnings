#include<stdio.h>
int arradd(int arr[50],int n);
int main(){
    int a[10];
    printf("Enter any ten numbers of your choice:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Sum of your ten numbers is %d",arradd(a,10));
    return 0;
}
int arradd(int a[50],int n){
    if(n==0){
        return 0;
    }
    else{
        return a[n-1]+arradd(a,n-1);
    }
}