#include<stdio.h>
int main(){
    int a,first,last,center,p=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    last=a%10;
    center=a;
    for(;center>=10;){
        center=center/10;
        p=p*10;
    }
    first=center;
    a=(last*p)+(a%p);
    a=a-last+first;
    printf("%d",a);
}
