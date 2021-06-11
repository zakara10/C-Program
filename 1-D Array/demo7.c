#include<stdio.h>
int main(){
    int arr[10],i,j,x,n;
    printf("How many elements you want in array ?");
    scanf("%d",&n);
    printf("Insert in elements\n");
    for(i=0;i<n;i++){
        printf("a[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }
    non_repeating_elements(arr, n);
    return 0;
}
int non_repeating_elements(int arr[], int n){
    int i,j,count = 1;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(arr[i] == arr[j] && i != j)
            break;
        }
    if(j == n ){
    printf("\nNon-repeating element [%d] : %d \n",count,arr[i]);
    ++count;
    }
}
return -1;
}