#include<stdio.h>
int main(){
    int x,s,y,n,i=1,j=1,count=1;
    printf("How many number you want in fibonacci series ??? \n");
    scanf("%d",&n);
    printf("*****\n");
    printf("%d\n",i);
    printf("%d\n",j);
    while(count<n){
        s = i+j;
        printf("%d\n",i+j);
        i=j;
        j=s;
        ++count;
    }
}