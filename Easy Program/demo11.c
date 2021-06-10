#include<stdio.h>
int main(){
    int i=0, x;
    printf("Enter the number :");
    scanf("%d",&x);
    while(x!=0){
        x=x/10;
        ++i;
    }
    printf("The number of the digit is :%d",i);
}