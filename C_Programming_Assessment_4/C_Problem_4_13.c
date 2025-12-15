#include <stdio.h>
int main() {
    int a,b,c,d,e=1;
    printf("Enter number: ");
    scanf("%d",&a);
    d=a%10;
    b=a;
loop:
    if(b >= 10){
        b=b/10;
        e=e*10;
        goto loop;}
c=b;
a=d*e+(a%e)/10*10+c;
printf("%d",a);
}
