#include<stdio.h>
int main(){
    int a[10],x,n,i,j,sum=0;
    printf("How many elements you want ?");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]=",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Sum of an array : %d",sum);
}
