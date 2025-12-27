#include <stdio.h>
int main(){
int a[5],sum=0;
for(int i=0;i<5;i++){
        printf("Enter a num: ");
        scanf("%d",&a[i]);
        }
for(int i=4;i>=0;i--){
      sum=sum+a[i];
      printf("%d",a[i]);
}
printf("\n%d",sum);
}
