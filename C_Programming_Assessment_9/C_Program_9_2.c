#include <stdio.h>
int main(){
int a[5];
int small;
for(int i=0;i<5;i++){
        printf("Enter a num: ");
        scanf("%d",&a[i]);}
        small=a[0];
        for(int i=0;i<5;i++){
        if(a[i]<small){
           small=a[i];}
}printf("The smallest num is:%d",small);
}
