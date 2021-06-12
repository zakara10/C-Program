#include<stdio.h>
int main(){
    int count=0,i=0 ;
    char a[20];
    printf("Enter the String  ? \n");
    gets(a);
    while(a[i]!='\0'){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            count++;
        }
        i++;
    }
    printf("The number of vowel is %d ",count);

}