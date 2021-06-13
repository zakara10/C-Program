#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int x,n,i=0,j=0;
    printf("Enter the String !!! \n");
    gets(str);
    while(str[i] != '\0'){
        if(str[i] != ' '){
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';

    printf("The New String is : %s",str);
}