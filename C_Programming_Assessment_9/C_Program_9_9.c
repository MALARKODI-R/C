#include <stdio.h>
int main(){
int a[5],prime;
for(int i=0;i<5;i++){
        printf("Enter a num: ");
        scanf("%d",&a[i]);
        }
for(int i=0;i<5;i++){
        prime=1;
        if(a[i]<=1){
          int prime=0;
        }else{
            for(int j=2;j<a[i];j++){
            if(a[i]%j==0){
                prime=0;
            }
        }
    }if(prime==0){
    printf("%d",a[i]);
    }
}
}
