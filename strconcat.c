#include<stdio.h>
void strct(char str1[100],char str2[100]);
void main(){
    char name1[100],name2[100];
    int count=0,i=0;
    printf("Enter two strings: \n");
    gets(name1);
    gets(name2);
    printf("String1 = %s & String2 = %s\n",name1,name2);
    strct(name1,name2);
    printf("String1 = %s & String2 = %s",name1,name2);
}
void strct(char str1[100],char str2[100]){
    int i=0,count=0,j=0;
    while(str1[i]!='\0'){
        count = count+1;
        i++;
    }
    while(str2[j]!='\0'){
        str1[count+j]=str2[j];
        j++;
    }
    str1[count+j]='\0';
    printf("String1 = %s & String2 = %s\n",str1,str2);
}