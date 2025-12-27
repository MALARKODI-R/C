#include <stdio.h>
int main(){
int a[5];
int temp;
for(int i=0;i<5;i++){
        printf("Enter a num: ");
        scanf("%d",&a[i]);
        }
for(int i=0;i<5;i++){
        if(a[i]%2==0){
          printf("%d",a[i]);
        }
    }
}
