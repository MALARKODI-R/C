#include <stdio.h>
int main(){
int a[100],i=0;
printf("Enter a num: ");
scanf("%d",&a[i]);
while(a[i]!=0){
        i++;
        scanf("%d",&a[i]);
}
if(i==4 && a[0]==a[i-1]){
                printf("Success");
        }else{
                printf("Failure");
        }
}
