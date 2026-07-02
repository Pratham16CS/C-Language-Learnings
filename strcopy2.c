#include<stdio.h>
void strcopy(char des[20],char src[20]);
int main(){
    char name1[10],name2[10];
    printf("Enter two strings:\n");
    gets(name1);
    gets(name2);
    printf("String1 = %s & String2 = %s\n",name1,name2);
    strcopy(name1,name2);
    printf("String1 = %s & String2 = %s\n",name1,name2);
    return 0;
}
void strcopy(char des[20],char src[20]){
    int i=0;
    for(i=0;src[i]!='\0';i++){
        des[i]=src[i];
    }
    des[i] = '\0';
    printf("String1 = %s & String2 = %s\n",des,src);
}