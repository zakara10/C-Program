
#include<stdio.h>
int main(){
    int n,arr[n],i;
    scanf("%d",&n);   
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Reversed array is:\n");
    for(i=n-1;i>=0;i--){
    printf("%d\n",arr[i]);
    }
}