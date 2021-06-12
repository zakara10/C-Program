#include<stdio.h>
#include<string.h>
int main(){
    char a[10] ,b[10];
    int i,j;
    printf("Enter the string !!! \n");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0){
        printf("It is Palindrome \n");
    }
    else{
        printf("It is not Palindrome \n");
    }
}