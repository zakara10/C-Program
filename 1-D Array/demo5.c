#include<stdio.h>
int main(){
    int n,i,arr[n],temp;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    printf("\nInput the array elements : ");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    void sort(arr, n);
    
}

void sort(int a [], int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        printf("\nThe second smallest element is %d \n",a[1]);
    }
}