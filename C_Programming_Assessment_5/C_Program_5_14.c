#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d",&a);
    if((a%10)%2==0){
        printf("%d",a);
    }else{
        for(b=a;b>=10;b=b/10);
      c=b;
    printf("%d",c-1);
    }
}
