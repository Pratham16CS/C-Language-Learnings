#include <stdio.h>
int main(){
    char name[100];
    int count = 0;
    int i;
    gets(name);
    while(name[count]!='\0'){
        count++;
    }
    printf("%d\n",count);
    for(i=0;i<=count;i++){
        printf("%c",name[count-i]);
    }
    return 0;
}