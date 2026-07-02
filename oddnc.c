# include<stdio.h>
int countodd(int p[],int n);
int main(){
    int number[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d",countodd(number,10));
    return 0;
}

int countodd(int p[],int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        if(p[i]%2 !=0){
            count++;
        }
    }
    return count;
}