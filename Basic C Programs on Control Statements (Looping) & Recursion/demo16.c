#include<stdio.h>
int main(){
    int x , fact=1;
    printf("Enter the number you want to find factorial of :");
    scanf("%d",&x);
    int m =x;
    while(x!=0){
        fact = fact *x;
        --x;
    }
    printf("The factorial of %d is %d",m,fact);
}