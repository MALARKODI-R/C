#include <stdio.h>
int main(){
int a[5];
int temp;
for(int i=0;i<5;i++){
        printf("Enter a num: ");
        scanf("%d",&a[i]);
        }
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("Ascending order: ");
for(int i=0;i<5;i++){
    printf("%d",a[i]);
}
}
