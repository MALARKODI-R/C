#include <stdio.h>
int main() {
    int x,y;
    printf("Enter a Three digit number: ");
    scanf("%d",&x);
    y=x-5;
    printf("%d",(2*(y/2))+((y%2)*6));
}
