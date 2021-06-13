#include<stdio.h>
#include<string.h>
int main(){
    char a[20],b[20];
    int i,j,temp,n;
    printf("Enter the String !!! \n");
    gets(a);
    n=strlen(a);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The sorted string is %s ",a);
}