#include <stdio.h>
int main(){
    int i,count = 0;
    char name[10];
    printf("Enter a string: ");
    gets(name);
    for(i=0;name[i]!= 0;i++){
        count = count+1;
    }
    printf("string length = %d\n",count);
    for(i=0;i<count;i++){
        printf("%c",name[count-i-1]);
    }
    return 0;
}