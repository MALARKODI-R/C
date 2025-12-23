#include<stdio.h>
void disp_lcm3(void);
int main(){
    disp_lcm3();}

disp_lcm3(void){
    int a,b,c,d,lcm1=0,lcm2=0;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&d);
    if(a>b){
        c=a;
    }else{
        c=b;
    }int i=c;
    while(i<=a*b){
        if(i%a==0 && i%b==0 && lcm1==0){
            lcm1=i;
        }i++;
    if(lcm1>d){
        c=lcm1;
    }else{
        c=d;
    }
    while(i<=lcm1*d){
        if(i%lcm1==0 && i%d==0 && lcm2==0){
            lcm2=i;
        }i++;
    }
}printf("%d",lcm2);
}







