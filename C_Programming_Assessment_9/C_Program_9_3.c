#include <stdio.h>
int main(){
int a[5];
int big;
for(int i=0;i<5;i++){
        printf("Enter a num: ");
        scanf("%d",&a[i]);}
        big=a[0];
        for(int i=0;i<5;i++){
        if(a[i]>big){
           big=a[i];}
}printf("The biggest num is:%d",big);
}
