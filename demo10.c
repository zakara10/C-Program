#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the value of a , b  ,c \n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    int max = ((a > b) && (a > c)) ? a : ((b > a) && (b > c)) ? b : c;
    printf("The max number is :%d" ,max);
}