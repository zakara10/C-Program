#include<stdio.h>
int main(){
    int a[10],x,n,i,j;
    printf("How many elements you want ?");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(x=1;x<n;x++){
        if(a[x]<min){
            min=a[x];
        }
    }

    int max=a[0];
    for(x=1;x<n;x++){
        if(a[x]>max){
            max=a[x];
        }
    }

    printf("\nThe maximum number of an array is  : %d",max);
    printf("\nThe maximum number of an array is  : %d",min);
}