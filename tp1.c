#include<stdio.h>
int main(){
    int m,n,i,j,k;
    printf("Guidelines:\n1] Player1-X\tPlayer2-O\n2] Alternate turns\n3] Need to enter row & column number to locate the block\n\n");
    char name1[20],name2[20];
    char a[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    printf("Enter player names:\n");
    printf("Player 1: ");
    gets(name1);
    printf("Player 2: ");
    gets(name2);
    printf("Welcome!!!\nGame begins!\n");
    for(k=0;k<9;k++){
        if(k==0||k%2==0){
            printf("%s turn\n",name1);
            printf("row: ");
            scanf("%d",&m);
            printf("column: ");
            scanf("%d",&n);
            a[m-1][n-1] = 'X';
        }
        else{
            printf("%s turn\n",name2);
            printf("row: ");
            scanf("%d",&m);
            printf("column: ");
            scanf("%d",&n);
            a[m-1][n-1] = 'O';
        }
        if(a[0][0]==a[0][1]&&a[0][0]==a[0][2]){
            break;
        }
        else if(a[1][0]==a[1][1]&&a[1][2]==a[1][0]){
            break;
        }
        else if(a[2][0]==a[2][1]&&a[2][0]==a[2][2]){
            break;
        }
        else if(a[0][0]==a[1][0]&&a[0][0]==a[2][0]){
            break;
        }
        else if(a[0][1]==a[1][1]&&a[0][1]==a[2][1]){
            break;
        }
        else if(a[0][2]==a[1][2]&&a[0][2]==a[2][2]){
            break;
        }
        else if(a[0][0]==a[1][1]&&a[0][0]==a[2][2]){
            break;
        }
        else if(a[0][2]==a[1][1]&&a[0][2]==a[2][0]){
            break;
        }
    }
    printf("Result:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
    if(a[0][0]==a[0][1]&&a[0][0]==a[0][2]){
        if(a[0][0]=='X'){
            printf("\nWINNER: %s\t",name1);
            printf("LOSSER: %s",name2);
        }
        else{
            printf("\nWINNER: %s\t",name2);
            printf("LOSSER: %s",name1);
        }
    }
    else if(a[1][0]==a[1][1]&&a[1][2]==a[1][0]){
        if(a[1][0]=='X'){
           printf("\nWINNER: %s\t",name1);
           printf("LOSSER: %s",name2); 
        }
        else{
            printf("\nWINNER: %s\t",name2);
            printf("LOSSER: %s",name1);
        }
    }
    else if(a[2][0]==a[2][1]&&a[2][0]==a[2][2]){
        if(a[2][0]=='X'){
            printf("\nWINNER: %s\t",name1);
            printf("LOSSER: %s",name2);
        }
        else{
            printf("\nWINNER: %s\t",name2);
            printf("LOSSER: %s",name1);
        }
    }
    else if(a[0][0]==a[1][0]&&a[0][0]==a[2][0]){
        if(a[0][0]=='X'){
            printf("\nWINNER: %s\t",name1);
            printf("LOSSER: %s",name2);
        }
        else{
            printf("\nWINNER: %s/t",name2);
            printf("LOSSER: %s",name1);
        }
    }
    else if(a[0][1]==a[1][1]&&a[0][1]==a[2][1]){
        if(a[0][1]=='X'){
            printf("\nWINNER: %s\t",name1);
            printf("LOSSER: %s",name2);
        }
        else{
            printf("\nWINNER: %s\t",name2);
            printf("LOSSER: %s",name1);
        }
    }
    else if(a[0][2]==a[1][2]&&a[0][2]==a[2][2]){
        if(a[0][2]=='X'){
            printf("\nWINNER: %s\t",name1);
            printf("LOSSER: %s",name2);
        }
        else{
            printf("\nWINNER: %s\t",name2);
            printf("LOSSER: %s",name1);
        }
    }
    else if(a[0][0]==a[1][1]&&a[0][0]==a[2][2]){
        if(a[0][0]=='X'){
            printf("\nWINNER: %s\t",name1);
            printf("LOSSER: %s",name2);
        }
        else{
            printf("\nWINNER: %s\t",name2);
            printf("LOSSER: %s",name1);
        }
    }
    else if(a[0][2]==a[1][1]&&a[0][2]==a[2][0]){
        if(a[0][2]=='X'){
            printf("\nWINNER: %s\t",name1);
            printf("LOSSER: %s",name2);
        }
        else{
            printf("\nWINNER: %s\t",name2);
            printf("LOSSER: %s",name1);
        }
    }
    else{
        printf("\nMATCH TIE!!!!");
    }
    return 0;    
}