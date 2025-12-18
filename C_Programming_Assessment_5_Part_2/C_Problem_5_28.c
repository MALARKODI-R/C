#include<stdio.h>
int main(){
    int a,b,c,d,lcm1=0,lcm2=0;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&d);
    if(a>b){
        c=a;
    }else{
        c=b;
    }
    for(int i=c;i<=a*b;i++){
        if(i%a==0 && i%b==0 && lcm1==0){
            lcm1=i;
        }
    if(lcm1>d){
        c=lcm1;
    }else{
        c=d;
    }
    for(int i=c;i<=lcm1*d;i++){
        if(i%lcm1==0 && i%d==0 && lcm2==0){
            lcm2=i;
        }
    }
}printf("%d",lcm2);
}
