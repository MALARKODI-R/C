#include <stdio.h>
int main(){
int a[100],sum=0,count=0,i=0;
printf("Enter a num: ");
scanf("%d",&a[i]);
for(i=0;a[i]!=0;i++){
        sum=sum+a[i];
        count++;
        scanf("%d",&a[i+1]);
        }printf("%d",count);
        printf("\n%d",sum);
}
