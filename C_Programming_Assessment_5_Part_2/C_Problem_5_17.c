#include<stdio.h>
int main(){
int a,b=0;
printf("Enter a number: ");
scanf("%d",&a);
if(a<=1){
    printf("Not prime");
}
a=a%100;
for(int i=2;i<=a/2;i++){
    if(a%i==0){
            b++;
    }
}if(b==0){
        printf("Prime");
        }
else{
    printf("Not prime");
    }
}
