#include<stdio.h>
int main(){
    int count=0,i=0 ;
    char a[20];
    printf("Enter the String you want lenght of ? \n");
    gets(a);
    while(a[i]!='\0'){
        count++;
        i++;
    }
    printf("The Length of the String is %d ",count);

}