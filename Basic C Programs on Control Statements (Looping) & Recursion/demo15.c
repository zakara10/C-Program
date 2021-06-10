#include<stdio.h>
int main(){
    int r =0,rem ,x;
    printf("Enter the number :");
    scanf("%d",&x);
    while(x!=0){
        rem = x%10;
        r = r*10 + rem;
        x /= 10;
    }
    printf("The reverse of the number is  :%d" , r);
}