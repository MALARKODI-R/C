#include<stdio.h>
int main(){
int a,b=0;
printf("Enter a number: ");
scanf("%d",&a);
if(a<=1){
    printf("Not prime");
}
a=a%100;
int i=2;
while(i<=a/2){
    if(a%i==0){
            b++;
    }i++;
}if(b==0){
        printf("Prime");
        }
else{
    printf("Not prime");
    }
}
