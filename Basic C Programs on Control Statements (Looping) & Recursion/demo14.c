#include<stdio.h>
int main(){
    int x,y,i,sum=0;
    printf("Enter starting and end term ");
    scanf("%d\n%d",&x,&y);
    for(i=x;i<=y;i++){
         sum = sum + i;
    }
    printf("The sum is :%d",sum);
}