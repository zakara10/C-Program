#include<stdio.h>
int main(){
    char ch;
    printf("Enter the Value : ");
    scanf("%c",&ch);
    if ((ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <='Z'))
        printf("It is Character ");
    else
        printf("It is not Character"); 
}