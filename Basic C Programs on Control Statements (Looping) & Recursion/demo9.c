#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a and b \n");
    scanf("%d\n%d",&a,&b);
    int max = (a>b)?a:b;
    printf("The max number is :%d" ,max);
}