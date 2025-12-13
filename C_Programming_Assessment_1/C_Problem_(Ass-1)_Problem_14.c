#include <stdio.h>
int main() {
    int x,y;
    printf("Enter a four digit number: ");
    scanf("%d",&x);
    y=x%100;
    printf("%d%d%d",x/100,y%10,y/10);
}
