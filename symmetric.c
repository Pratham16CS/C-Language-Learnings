 #include<stdio.h>
 #include<stdlib.h>
 int main(){
    int p,q,a[10][10],count=0;
    printf("Enter number of rows: ");
    scanf("%d",&p);
    printf("Enter number of columns: ");
    scanf("%d",&q);
    if(p!=q){
        printf("Matrix is not a square matrix.\n");
        exit(0);
    }
    else{
        printf("Matrix is a square matrix.\n");
        printf("Enter elements of Matrix:\n");
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                scanf("%d",&a[i][j]);
            }
            printf("\n");
        }
        printf("Your matrix :\n");
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("Transpose of Matrix:\n");
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                printf("%d ",a[j][i]);
            }
            printf("\n");
        }
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                if(a[i][j]!=a[j][i]){
                    count++;
                }
            }
        }
        if(count == 0){
            printf("Your matrix is Symmetric matrix.");
        }
        else{
            printf("Your matrix is not a Symmetric matrix");
        }
        return 0;
    }
 }