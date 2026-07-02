//Program to calcualte number of vowels in a word.
#include<stdio.h>
int main(){
    char word[20];
    printf("Enter a word: ");
    scanf("%s",&word);
    int i = 0;
    int count,count1,count2;
    count = 0;
    count1 = 0;
    count2 = 0;
    while(word[i]!='\0'){
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u' || word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U'){
            count1 += 1;
        }
        else{
            count2 += 1;
        }
        count +=1;
        i++;
    }
    printf("Number of letter in word: %d\n",count);
    printf("Number of vowels in word: %d\n",count1);
    printf("Number of consonants in word: %d\n",count2);
    return 0;
}