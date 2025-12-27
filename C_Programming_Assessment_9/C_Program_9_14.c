#include <stdio.h>
int main(){
int a[100],sum[100],n,i=0;
printf("Enter a num: ");
scanf("%d",&a[i]);
while(a[i]!=0){
        i++;
        scanf("%d",&a[i]);
        }
    int count=i;
 for(i=0;i<count;i++){
n=a[i];
sum[i]=0;
while(n>0){
sum[i]+=n%10;
n/=10;
}
}
for(i=0;i<count-1;i++){
for(int j=i+1;j<count;j++){
if(sum[i]>sum[j]){
int t=sum[i];
sum[i]=sum[j];
sum[j]=t;
}
}
}
for(i=0;i<count;i++){
printf("%d ",sum[i]);
}
}
