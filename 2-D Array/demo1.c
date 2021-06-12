#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],x,y,m,n,j,i;
    printf("Enter the number of rows and colums of 1st array respectively !!!");
    scanf("%d\n%d",&x,&y);
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

    printf("Enter the number of rows and colums of 2nd array respectively !!!");
    scanf("%d\n%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]=",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
}

    if(x==m && y==n){
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                c[i][j] = a[i][j] - b[i][j];
            }
        }

        printf("*******SUBTRACTION********");
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                printf("%d\t",c[i][j]);
            }
        printf("\n");
        }
    }
    else{
        printf("Cannot Perform Subtraction !!!");
    }
    
}