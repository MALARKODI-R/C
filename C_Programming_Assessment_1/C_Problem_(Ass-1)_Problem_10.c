#include <stdio.h>
int main() {
    int x,y,sum=0;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    y=x%100;
    sum=((x/100)+(y/10)+(y%10));
    printf("Sum=%d",sum);
}
