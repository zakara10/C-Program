#include<string.h>
#include<stdio.h>
int main(){
    char str[50],new[50];
    int x,n,i=0;
    printf("Enter the String you want to Reverse !!! \n");
    gets(str);
    n=strlen(str);
    while (n>=0)
    {
        new[i]=str[n-1];
        i++;
        n--;
    }
    printf("Reverse String is = %s  ",new);
    
}