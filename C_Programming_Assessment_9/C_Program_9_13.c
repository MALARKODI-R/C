#include <stdio.h>
int main(){
int a[100],sum=0,count=0,i=0;
printf("Enter a num: ");
scanf("%d",&a[i]);
while(a[i]!=0){
        sum=sum+a[i];
        count++;
        i++;
        scanf("%d",&a[i]);
        }
if(count%2!=0){
        printf("%d",a[count/2]);}
else{
    printf("%d",(a[count/2]+a[(count/2)-1])/2);
}
}
