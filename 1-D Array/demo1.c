#include<stdio.h>
int main(){
    int a[50] ,n,s,flag=0,p,c;
    printf("How many elements you want to insert");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("a[%d]=",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter the element you want to search ");
    scanf("%d",&s);
    for (int j=0;j<n; j++){
        if(a[j]==s){
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Found !!!");
    else
        printf("Not Found!!!");
    
    printf("Enter the position you want to delete ");
    scanf("%d",&p);
    if (p >= n+1)
        printf("\nDeletion not possible.\n");
    else
        {
        for (c = p-1;c <n-1; c++)
        a[c] = a[c+1];
        printf("\nArray after deletion : ");
        for (c = 0; c < n-1; c++)
        printf("%d\n", a[c]);
        }

}