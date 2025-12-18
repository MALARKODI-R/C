#include<stdio.h>
int main(){
    int a,b,c,hcf=0;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    if(a<b){
        c=a;
    }else{
        c=b;
    }
    for(int i=c;i>=1;i--){
        if(a%i==0 && b%i==0 ){
            hcf=i;
            break;
        }
    }printf("%d",hcf);
}
