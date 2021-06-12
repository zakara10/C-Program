#include<stdio.h>
int main(){
    int x,n,r,new=0;
    printf("Enter the number you want to check the palindrome of ?\n");
    scanf("%d",&n);
    x = n;
    while(n>0){
        r = n%10;
        new = new*10+r;
        n=n/10;
    }
    if(x==new){
        printf("Its Palindrome !!!");
    }
    else{
        printf("Oopppsss....Not Palindrome !!!");
    }
}