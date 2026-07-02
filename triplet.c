#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Number1 :");
    scanf("%d",&a);
    printf("Number2 :");
    scanf("%d",&b);
    printf("Number3 :");
    scanf("%d",&c);
    if(a>b && a>c){
        if((a*a)==(b*b)+(c*c)){
            printf("It is a pythagoras triplet");
        }
        else{
            printf("It is not a pythagoras triplet");
        }
    }
    else if(b>c && b>a){
        if((b*b)==(a*a)+(c*c)){
            printf("It is a pythagoras triplet");
        }
        else{
            printf("It is not a pythagoras triplet");
        }
    }
    else if(c>a && c>b){
        if((c*c)==(a*a)+(b*b)){
            printf("It is a pythagoras triplet");
        }
        else{
            printf("It is not a pythagoras triplet");
        }
    }
    
    }
    return 0;
}