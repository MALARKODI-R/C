#include <stdio.h>
int main() {
    int x,y;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    y=x%100;
    printf("%d%d%d",y%10,y/10,x/100);
}
