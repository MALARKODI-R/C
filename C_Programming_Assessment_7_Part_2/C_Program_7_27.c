#include<stdio.h>
void disp_lcm2(void);
int main(){
    disp_lcm2();}

disp_lcm2(void){
    int a,b,c,lcm=0;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        c=a;
    }else{
        c=b;
    }int i=c;
    while(i<=a*b){
        if(i%a==0 && i%b==0 && lcm==0){
            lcm=i;
        }i++;
    }printf("%d",lcm);
}






