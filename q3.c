#include<stdio.h>
#include<string.h>
int main(){
    char b[]="Hi friends";
    char *ptr;
    ptr=b;
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(ptr));
    return 0;
}