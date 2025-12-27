#include <stdio.h>
int main(){
int a[5];
int sum=0,avg;
for(int i=0;i<5;i++){
        printf("Enter a num: ");
        scanf("%d",&a[i]);
        sum=sum+a[i];}
        avg=sum/5;
        printf("%d",avg);
}
