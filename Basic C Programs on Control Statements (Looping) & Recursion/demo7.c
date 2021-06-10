#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    a = a + b;  //a = 4 + 5 = 9
    b = a - b;  //b = 9 - 5 = 4
    a = a - b;  //a = 9 - 4 = 5
    printf("Numbers after swapping: a = %d  b = %d", a, b);
}