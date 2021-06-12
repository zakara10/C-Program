#include<stdio.h>
int main(){
    int x,n,sum=0,i,j,rem=0,temp;
    printf("Enter the number you want to check the armstrong number of ??? \n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rem = n%10;
        sum  = sum + (rem*rem*rem);
        n=n/10; 
    }
    if(sum==temp){
        printf("%d it is an Armstrong Number",temp);
    }
    else{
        printf("%d it is not an Armstrong Number",temp);
    }
}