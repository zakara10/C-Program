#include<stdio.h>
int main(){
    int r = 0 ,x;
    printf("Enter the number :");
    scanf("%d",&x);
    while(x!=0){
        r = r + x%10;
        x = x/10;
    }
    printf("The sum of digit is :%d" , r);
}