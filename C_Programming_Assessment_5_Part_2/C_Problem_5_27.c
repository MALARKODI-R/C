#include<stdio.h>
int main(){
    int a,b,c,lcm=0;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        c=a;
    }else{
        c=b;
    }
    for(int i=c;i<=a*b;i++){
        if(i%a==0 && i%b==0 && lcm==0){
            lcm=i;
        }
    }printf("%d",lcm);
}
