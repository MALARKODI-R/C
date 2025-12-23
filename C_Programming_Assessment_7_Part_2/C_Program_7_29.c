#include<stdio.h>
void disp_count_hcf2(void);
int main(){
    disp_count_hcf2();}

disp_count_hcf2(void){
    int a,b,c,hcf=0;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    if(a<b){
        c=a;
    }else{
        c=b;
    }int i=c;
    while(i>=1){
        if(a%i==0 && b%i==0 ){
            hcf=i;
            break;
        }i--;
    }printf("%d",hcf);
}








