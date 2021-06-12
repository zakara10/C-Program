#include<stdio.h>
int main(){
    int a[10][10],b[10][10],x,y,i,j;
    printf("Enter number of rows and colums respectively !!!");
    scanf("\n%d\n%d",&x,&y);
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            b[j][i]=a[i][j];
        }
    }

    printf("Transpose of Matrix !!!\n");
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    
}