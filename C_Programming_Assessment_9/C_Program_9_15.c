#include<stdio.h>
int main(){
    int a[50],b[50],c[50],n1=0,n2=0;
    printf("Enter numbers for 1st array :\n");
    for(int i=0;i<50;i++){
        scanf("%d",&a[i]);
        if(a[i]==0)break;
        n1++;
     }
     printf("Enter numbers for 2nd array :\n");
     for(int i=0;i<50;i++){
        scanf("%d",&b[i]);
        if(b[i]==0)break;
        n2++;
    }
int count=(n1<n2)?n1:n2;
    for(int i=0;i<count;i++){
        c[i]=a[i]+b[i];
    }
    for(int i=0;i<count;i++){
        printf("%d ",c[i]);
    }
}
