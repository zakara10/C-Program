#include<stdio.h>
int main(){
    int x,y,n,i,j,sum=0;
    printf("Enter number ???\n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("Its Perfect Number \n");
    }
    else{
        printf("Ooopppsss ....Not perfect Number\n");
    }
}